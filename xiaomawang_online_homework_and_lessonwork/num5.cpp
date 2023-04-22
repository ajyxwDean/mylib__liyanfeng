#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int dp[200000] = {0};//dp[i]表示组成i元需要的最少张数
    for(int i = 0 ; i < n ; i++){
        dp[i] = 99 * n;
    }
    // 1元 5元 11元
    //初始状态->状态转移方程->按阶段转移->最终状态
    // 1RMB 5RMB 11RMB
    //dp[1] = dp[5] = dp[11] = 1
    //dp[1] -> dp[1]/dp[5]/dp[11]
    //   影响: dp[2]/dp[6]/dp[12]
    // 2张最小张数        dp[1]+1/dp[1]+1/dp[1]+1
    //状态转移方程: dp[i] += min(dp[i+1],dp[i+5],dp[i+7])
    dp[1] = 1;
    dp[5] = 1;
    dp[11] = 1;
    for(int i = 1 ; i <= n ; i++){
        dp[i+1] = min(dp[i+1],dp[i]+1);//dp[i]加一张1元
        dp[i+5] = min(dp[i+5],dp[i]+1);//dp[i]加一张5元
        dp[i+7] = min(dp[i+11],dp[i]+1);//dp[i]加一张11元
    }
    printf("%d",dp[n]);
    return 0;
}
//动态规划没有固定的步骤