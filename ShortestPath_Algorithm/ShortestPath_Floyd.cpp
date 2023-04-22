#include <bits/stdc++.h>
#include "ShortestPath.hpp"
using namespace std;

typedef int** FLOYD_DistancMatrix;
typedef int*** FLOYD_PathMatrix;

void ShortestPath_FLOYD(MGraph G, FLOYD_PathMatrix P, FLOYD_DistancMatrix D);

void ShortestPath_FLOYD(MGraph G, FLOYD_PathMatrix P, FLOYD_DistancMatrix D){
    int v, w, u, i;
    for (v = 0; v < G.vexnum; ++v)
    {
        for (w = 0; w < G.vexnum; ++w)
        {
            D[v][w] = G.arcs[v][w];
            for (u = 0; u < G.vexnum; ++u)
            {
                P[v][w][u] = FALSE;
                if (D[v][w] < INF)
                {
                    P[v][w][v] = TRUE;
                    P[v][w][w] = TRUE;
                }//if
                
            }//for
            
        }//for
        
    }//for
    for (u = 0; u < G.vexnum; ++u)
    {
        for (v = 0; v < G.vexnum; ++v)
        {
            for (w = 0; w < G.vexnum; ++w)
            {
                if (D[v][u] + D[u][w] < D[v][w])
                {
                    D[v][w] = D[v][u] + D[u][w];
                    for (i = 0; i < G.vexnum; ++i)
                    {
                        P[v][w][i] = P[v][u][i] || P[u][w][i];
                    }//for
                    
                }//if
                
            }//for
            
        }//for
        
    }//for
    
}//ShortestPath_FLOYD

int n,m;

void FLoyd(MGraph graph){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                graph.arcs[i][j] = min(graph.arcs[i][k] + graph.arcs[k][j], graph.arcs[i][j]);
            }
            
        }
        
    }
    
}

int main(){
    MGraph FLOYD_grap;
    cout << "n:";
    cin >> n;
    cout << endl;
    cout << "m:";
    cin >> m;
    cout << endl;
    FLOYD_grap.Edgenum = m;
    FLOYD_grap.vexnum = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> FLOYD_grap.arcs[i][j];
        }
    }
    FLOYD_PathMatrix p;
    for (int i = 0; i < m; i++)
    {
        cin >> FLOYD_grap.Edges[i].bef >> FLOYD_grap.Edges[i].to >> FLOYD_grap.Edges[i].val;
    }
    FLOYD_DistancMatrix d;
    memset(p, 0, sizeof(p));
    memset(d, 0, sizeof(d));
    FLoyd(FLOYD_grap);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << FLOYD_grap.arcs[i][j];
        }
        
    }
    
    
    return 0;
}