
#include <bits/stdc++.h>

using namespace std;

const int MAX_NODE = 1000;
const int INF = 1e8; // 100000000

vector <int> graph[ MAX_NODE ];
int edge, node, cost[ MAX_NODE ], visit[ MAX_NODE ], parent[ MAX_NODE ], source;

void ini()
{
     for( int i = 1 ; i <= node ; i++ )
    {
        visit[i] = 0;
        cost[i] = INF;
        graph[i].clear();
    }
}

void constructGraph()
{

    cin >> node >> edge;
    ini();
    int x , y;
    for( int i = 0 ; i < edge ; i++ )
    {
       cin >> x >> y;
       graph[x].push_back(y);
       graph[y].push_back(x);
    }

    cin >> source;


}


void dfs(int node, int cst) {

     visit[node] = 1;
     cost[node] = cst + 1;
     int sz = graph[node].size();
     for( int i = 0; i < sz; i++ )
     {
         int nxt = graph[node][i];
         if( cost[nxt] > cst + 1 ) dfs( nxt , cst + 1 );
     }

}



int main()
{
    int cs, numberOfTestCase;
    cin >> numberOfTestCase;
    for( cs = 1 ; cs <= numberOfTestCase ; cs++ ) {

        constructGraph();
        dfs(source, 0);
        for( int i = 1 ; i <= node ; i++ ) {
            printf("from %d to %d:: minimum cost:: %d\n", source , i , cost[i] );
        }

    }

    return 0;
}

/*
1
6 6
1 2
1 5
1 4
1 3
3 2
2 6
4


*/


