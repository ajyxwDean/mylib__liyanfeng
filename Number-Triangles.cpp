#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin >> dp[i][j];
        }
    }
    // 从下一行开始，补全动态规划的代码
    for(int i = n-1 ; i >= 1 ; i++){
        for(int j = 1 ; j <= i ; j++){
            dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout << dp[1][1];
    system("pause");
    return 0;
}