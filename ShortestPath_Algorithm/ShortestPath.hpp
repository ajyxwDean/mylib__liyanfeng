#include <bits/stdc++.h>
using namespace std;

#ifndef _SHORTESTPATH_HPP_
#define _SHORTESTPATH_HPP_

class ShortestPathTable{
private:
    int SPT[10000];
public:
    int operator[] (int __pos){
        return SPT[__pos];
    }
};

struct Mpair{
    int first;
    int second;
};

//#define INFINITY        INT_MAX
#define INF             0x3f3f3f3f
#define MAX_VERTEX_NUM  20
#define MAX_EDGE_NUM    20
typedef enum{DG, DN, UDG, UDN} GraphKind;
class MGraph{
public:
    int vexnum;
    int Edgenum;
    struct Edge{
        int to;
        int bef;
        int val;
    }Edges[MAX_EDGE_NUM];
    int arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
};

namespace Dijkstra
{
    
class PathMatrix{
private:
    int PM[10010][10010];
public:
    int operator[] (Mpair __pos){
        return PM[__pos.first][__pos.second];
    }
};
} // namespace name

namespace Floyd
{
    
} // namespace Floyd


int D[MAX_VERTEX_NUM];
int P[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

_Bool final[MAX_VERTEX_NUM];

#define TRUE       true
#define FALSE      false


#endif