#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 510, M = 10010;

struct Edge
{
//a起点 b终点 c权重
    int a, b, c;
}edges[M];

int n, m, k;
int dist[N];
//备份上一次的dist数据
int last[N];

void bellman_ford()
{
    memset(dist, 0x3f, sizeof dist);

    dist[1] = 0;
    //不超过k条边，迭代不超过k次
    for (int i = 0; i < k; i ++ )
    {
    //备份上一次的数据
        memcpy(last, dist, sizeof dist);
    //更新每条边
        for (int j = 0; j < m; j ++ )
        {
        //使用备份数据是为了防止串联
        //例如：存在边关系1->2->3
        //假设1->2的边更改了,2->3随着1->2的更改而更改
        //而此时要求2->3的更改是在原始数据的dist[2] dist[3]
        //和边的权值之间更改的，不是利用新数据更改。
            auto e = edges[j];
        //由于存在重边或者自环问题 只能是dist[e.b] 不能是last[e.b]
            dist[e.b] = min(dist[e.b], last[e.a] + e.c);
        }
    }
}

int main()
{
    scanf("%d%d%d", &n, &m, &k);

    for (int i = 0; i < m; i ++ )
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        edges[i] = {a, b, c};
    }

    bellman_ford();

    if (dist[n] > 0x3f3f3f3f / 2) puts("impossible");
    else printf("%d\n", dist[n]);

    return 0;
}