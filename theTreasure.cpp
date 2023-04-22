#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
const int N = 101;
int a[N];
int arcs[N][N];
int main(){
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arcs[i][j];
        }
        
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arcs[i][j] = min(arcs[i][k] + arcs[k][j], arcs[i][j]);
            }
            
        }
        
    }
    //Floyd algorithm
    int ans = 0;
    for (int i = 1; i < m; i++)
    {
        ans += arcs[a[i-1]][a[i]];
    }
    printf("%d",ans);
    
    
    return 0;
}