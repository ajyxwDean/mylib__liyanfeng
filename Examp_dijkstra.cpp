//#include <cstring>
//#include <iostream>
//#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

const int N = 510;

int n, m;
//稠密图，使用邻接矩阵
int g[N][N];
//从1号点走到n号的距离
int dist[N];
//集合s，已经确定最短路的点
bool st[N];

const int INF = 0x3f3f3f3f;

int dijkstra()
{
//将1好的点的距离初始化成0，其余所有点到1号点的距离是正无穷
    memset(dist, INFINITY, sizeof dist);
    dist[1] = 0;
//循环n次
    for (int i = 0; i < n ; i ++ )
    {
        int t = -1;
        //在所有没有找到最小值的点中，找到一个离1号点距离最小的点。
        for (int j = 1; j <= n; j ++ )
            if (!st[j] && (t == -1 || dist[t] > dist[j]))
                t = j;
        st[t] = true;
		//由这个点更新其它点的距离值 。
        for (int j = 1; j <= n; j ++ )
        //只需要更新不在集合s中的点
        //没有找到距离1号点最短距离的点
        	if(!st[j])
            	dist[j] = min(dist[j], dist[t] + g[t][j]);
    }
	//为什么>=,而不是>,因为存在正权自环
    if (dist[n] >= INF) return -1;
    return dist[n];
}

int main()
{
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i ++ )
        for (int j = 1; j <= n; j ++ )
            if (i == j) g[i][j] = 0;
            else g[i][j] = 0x3f3f3f3f;
    //最短路径中，自环问题没有影响
    //重边只保留最小的
    while (m -- )
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        g[a][b] = min(g[a][b], c);
    }

    printf("%d\n", dijkstra());

    return 0;
}