

#include <queue>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int MAX_NODE = 1000;
const int INF = 1e9;

vector <int> graph[ MAX_NODE ], cost[ MAX_NODE ];
int dist[ MAX_NODE ], node , edge ;
bool visit[ MAX_NODE ];



void ini()
{
     for( int i = 1 ; i <= node ; i++ )
    {
        visit[i] = 0;
        dist[i] = INF;
        graph[i].clear();
        cost[i].clear();
    }
}

void constructGraph()
{

    cin >> node >> edge;
    ini();
    int x , y, c;
    for( int i = 0 ; i < edge ; i++ )
    {
       cin >> x >> y >> c;
       graph[x].push_back(y);
       graph[y].push_back(x);
       cost[x].push_back(c);
       cost[y].push_back(c);
    }


}



void bellmanford(int source)
{
    dist[source] = 0;

    for( int step = 1 ; step < node ; step++ )
    {
        for( int i = 1 ; i <= node ; i++ )
        {
            int sz = graph[i].size();

            for( int j = 0 ; j < sz ; j++ )
            {
                int nxtNode = graph[i][j];
                int nxtCost = dist[i] + cost[i][j];
                if( dist[nxtNode] > nxtCost ) // update
                {
                    dist[nxtNode] = nxtCost;
                }
            }
        }
    }

    int negCycle = 0;

    for( int i = 1 ; i <= node ; i++ )
        {
            int sz = graph[i].size();

            for( int j = 0 ; j < sz ; j++ )
            {
                int nxtNode = graph[i][j];
                int nxtCost = dist[i] + cost[i][j];
                if( dist[nxtNode] > nxtCost ) // negative cycle present
                {
                    negCycle = 1;
                }
            }
        }

    if( negCycle ) {

        printf("There is negative edge present in graph\n");
        return ;

    }



    for( int i = 1 ; i <= node ; i++ )
    {
        printf("from %d to %d:: minimum cost:: %d\n", source , i , dist[i] );
    }
}





int main()
{
    int cs, t;
    cin >> t;
    for( cs = 1 ; cs <= t ; cs++ ) {

        constructGraph();
        bellmanford(1);

    }


    return 0;
}

/*
2
9 9
1 2 5
2 3 10
2 4 8
4 5 7
4 6 10
4 8 11
8 7 20
6 7 1
7 9 5
9 9
1 2 -5
2 3 10
2 4 8
4 5 7
4 6 10
4 8 11
8 7 20
6 7 1
7 9 5


*/


