//Floyd 全源
#include <bits/stdc++.h>
using namespace std;

const int N = 100;
const int INF = 0x3f3f3f3f;

int arcs[N][N];

int Floyd(){
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                arcs[i][j] = min(arcs[i][k] + arcs[k][j], arcs[i][j]);
            }
            
        }
        
    }
    return 0;
}

int main(){

    return 0;
}