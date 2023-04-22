#include <bits/stdc++.h>
using namespace std;
const int N = 101;
const int INF = 0x3f3f3f3f;

struct Edge
{
    int st,ed;
}Edges[N];

int arcs[N][N] = {{INF, INF}};

int main(){
    int n,m;
    int ans=0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> Edges[i].st >> Edges[i].ed;
        arcs[Edges[i].st][Edges[i].ed] = 1;
        arcs[Edges[i].ed][Edges[i].st] = 1;
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(arcs[i][j] == 1 || (arcs[i][k] == 1 && arcs[k][j] == 1))
                {
                    ans += 1;
                }
            }
            
        }
        
    }

    int x,y;
    cin >> x >> y;
    if(ans){
        printf("%d", ans);
    }else{
        printf("-1");
    }
    
    
    return 0;
}