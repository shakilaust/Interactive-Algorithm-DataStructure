#include <queue>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int MAX_NODE = 1000;
const int INF = 1e9;

vector <int> graph[ MAX_NODE ], reverseGreaph[ MAX_NODE ];
int node , edge ;
bool visit[ MAX_NODE ];

stack < int > topologicalList;


void clearGraph()
{
    for( int i = 0 ; i <= node ; i++ )
    {
        graph[i].clear();
        reverseGreaph[i].clear();
    }

    while(!topologicalList.empty()) topologicalList.pop();
}


void clearVisitedNodes()
{
    for( int i = 0 ; i <= node ; i++ )
    {
        visit[i] = 0;
    }
}

void constructGraph(){

    cin >> node >> edge;
    clearGraph();
    for( int i = 0 ; i < edge ; i++ )
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        reverseGreaph[v].push_back(u);
    }
}


void dfsOnMainGraph(int node)
{
    visit[node] = true;
    int sz = graph[node].size();
    for( int i = 0 ; i < sz ; i++ )
    {
        int nextNode = graph[node][i];
        if( visit[nextNode] == false ) {
            dfsOnMainGraph(nextNode);
        }
    }
    topologicalList.push(node);
}

void dfsOnReverseGraph(int node)
{
    printf(" %d", node);
    visit[node] = true;
    int sz = reverseGreaph[node].size();
    for( int i = 0 ; i < sz ; i++ )
    {
        int nextNode = reverseGreaph[node][i];
        if( visit[nextNode] == false )
        {
            dfsOnReverseGraph(nextNode);
        }
    }
}
int main()
{
    int cs, t;
    cin >> t;
    for( cs = 1 ; cs <= t ; cs++ ) {

        constructGraph();
        clearVisitedNodes();
        for( int i = 1 ; i <= node ; i++ )
        {
            if( visit[i] == false )
            {
                dfsOnMainGraph(i);
            }
        }
        clearVisitedNodes();
        int groupNumber = 1;
        while(!topologicalList.empty()) {

            int node = topologicalList.top();
            topologicalList.pop();
            if( visit[node] == false ) {

                printf("group number %d :", groupNumber);
                dfsOnReverseGraph(node);
                groupNumber++;
                printf("\n");
            }

        }


    }


    return 0;
}

/*
1
8 14
2 1
1 5
5 2
6 2
6 5
3 2
3 4
4 3
6 7
7 6
7 3
8 7
8 4
8 8
*/
