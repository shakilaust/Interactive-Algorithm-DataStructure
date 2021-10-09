#include <bits/stdc++.h>

using namespace std;

const int MAX_NODE = 1000;

vector <int> graph[ MAX_NODE ];
int low[ MAX_NODE ], discover[ MAX_NODE ], visit[ MAX_NODE ], node, edge, discover_time;
int isArticulationPoint[ MAX_NODE ];


void ini()
{
    for( int i = 0 ; i <= node ; i++ )
    {
        graph[i].clear();
        visit[i] = 0;
        isArticulationPoint[i] = 0;
    }
    discover_time = 1;
}

void constructGraph(){

    cin >> node >> edge;
    ini();
    for( int i = 0 ; i < edge ; i++ )
    {
        int u , v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

}

void dfs( int node, int parnt ) {
    low[node] = discover[node] = discover_time++;
    visit[node] = 1;
    int sz = graph[node].size();
    int child = 0;
    for( int i = 0 ; i < sz; i++ ) {

        int nextNode = graph[node][i];
        if( parnt == nextNode ) continue;
        if( visit[nextNode] == 0 ) {

            child++;
            dfs(nextNode, node );
            low[node] = min( low[node] , low[nextNode]);
            // root node condition
            if( parnt == -1 && child > 1 ) {
                isArticulationPoint[node] = 1;

            } else if( parnt != -1 && low[nextNode] >= discover[node]) {

                isArticulationPoint[node] = 1;
            }

        } else {

            low[node] = min( low[node], discover[nextNode] );
        }

    }
}



int main()
{
    int cs, numberOfTestCase;
    cin >> numberOfTestCase;
    for( cs = 1 ; cs <= numberOfTestCase ; cs++ ) {

        constructGraph();
        for( int i = 1 ; i <= node ; i++ )
        {
            if( visit[i] == 0 ) dfs( i , -1 );
        }

        printf(" Articulation points ::");
        for( int i = 1; i <= node ; i++ )
        {
            if( isArticulationPoint[i] == 1 )
            {
                printf(" %d",i);
            }
        }
        printf("\n");

    }

    return 0;
}

/*

1
10 13
1 2
1 6
3 7
2 7
6 7
7 8
7 9
9 8
3 8
8 4
4 5
8 5
8 10

*/
