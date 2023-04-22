#include <bits/stdc++.h>
using namespace std;

#define CONST const

CONST INT PT_NUM_ = 1000;

struct Edge //边的定义
{
    int a, b, c;
    //a:起点 B:终点 c:权重
}Edges[PT_NUM_];

typedef Edge EDGE;
typedef int INT;
typedef float FLOAT;
typedef double DOUBLE;
typedef string STRING;


//dist[i][j] i -> 最短路径
int mp[PT_NUM_][PT_NUM_];
int arcs[PT_NUM_][PT_NUM_];//邻接矩阵
int dist[PT_NUM_];//最短路径
int flag[PT_NUM_] = {false};
int p[PT_NUM_];

int n,m;
int st;//start
int ed;//end

const INT INF = 0x3f3f3f3f;

int dijkstra(){
    for(int i = 0; i < sizeof(dist); i++)
    {
        dist[i] = INF;
    }
    dist[0] = 0;
    //初始化dist
    for(int i = 0; i < PT_NUM_; i++)
    {
        for(int j = 0; j < PT_NUM_; j++)
        {
            arcs[i][j] = INF;
            if(i == j){
                arcs[i][j] = 0;
            }
        }

    }
    //初始化arcs邻接矩阵
    /*
        0   1   2   3   4   5
    0   -0- INF INF INF INF INF
    1   INF -0- INF INF INF INF
    2   INF INF -0- INF INF INF
    3   INF INF INF -0- INF INF
    4   INF INF INF INF -0- INF
    5   INF INF INF INF INF -0-
    */
   for (int i = 0; i < PT_NUM_; i++)
   {
        for (int j = 0; j < PT_NUM_; j++)
        {
            if(mp[i][j] != INF){
                arcs[i][j] = mp[i][j];
            }
        }
        
   }
   
}

int main(){
    cin >> n >> m;
    return 0;
}