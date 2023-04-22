#include<bits/stdc++.h>
using namespace std;
int main(){
  int dis[2020][2020];
  int n, m, a, b, x, y;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){

    for(int j = 1; j <= n; j++){

        dis[i][j] = 1e9;

    }

  }

  for(int i = 1; i <= m; i++){

    cin >> a >> b;
    dis[a][b] = 1;

  }

  for(int k = 1; k <= n; k++){

    for(int i = 1; i <= n; i++){

      for(int j = 1; j <= n; j++){

        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

      }

    }

  }

  cin >> a >> b;

  if(dis[a][b] == 1e9){

    cout << -1;

  }else{

    cout << dis[a][b];

  }
  return 0;
}