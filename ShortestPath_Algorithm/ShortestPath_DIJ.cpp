#include <bits/stdc++.h>
#include <cstring>
#include "ShortestPath.hpp"
using namespace std;

void ShortestPath_DIJ(MGraph G, int v0){
    int v, i, w;
    for (v = 0; v < G.vexnum; ++v)
    {
        final[v] = FALSE; D[v] = G.arcs[v0][v];
        for (w = 0; w < G.vexnum; ++w)
        {
            P[v][w] = FALSE;
        }
        if (D[v] < INF) {P[v][v0] = TRUE; P[v][v] = TRUE; }
    }//for
    D[v0] = 0; final[v0] = TRUE;
    //start main for
    int mn = -INF;
    for (i = 1; i < G.vexnum; ++i)
    {
        mn = INF;
        for (w = 0; w < G.vexnum; ++w)
            if(!final[w])
                if(D[w] < mn) {v = w; mn = D[w]; }
            final[v] = TRUE;
            for (w = 0; w < G.vexnum; ++w)
            {
                if(!final[w] && (mn + G.arcs[v][w] < D[w]))
                {
                    D[w] = mn + G.arcs[v][w];
                    P[w][0] = P[v][0]; P[w][w] = TRUE;
                }//if
            }//for
    }//for
}//ShortestPath_DIJ

int main(){
    MGraph  grap;
    int n,m;
    cout << "n:" << endl;
    cin >> n;
    cout << "m:" << endl;
    cin >> m;
    grap.vexnum = n;
    grap.Edgenum = m;
    cout << "arcs(n * n):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grap.arcs[i][j];
        }
        
    }
    cout << "information of edges (to before value):" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> grap.Edges[i].to >> grap.Edges[i].bef >> grap.Edges[i].val;
    }
    
    int st;
    cout << "start point num:" << endl;
    cin >> st;
    ShortestPath_DIJ(grap, st);
    cout << "\n\n\n\n" << "ANS:\n";
    for (int i = 0; i < grap.vexnum; i++)
    {
        cout << D[i] << " ";
    }
      
    return 0;
}