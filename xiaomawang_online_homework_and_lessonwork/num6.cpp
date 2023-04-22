//
//题目描述
//设有N*N的方格图,我们将其中的某些方格中填入正整数,而其他的方格中则放入数字0。
//
//某人从图的左上角的A 点(1,1)出发，可以向下行走，也可以向右走，直到到达右下角的B点(N,N)。在走过的路上，他可以取走方格中的数。
//
//此人从A点到B 点，试找出一条路径，使得取得的数之和为最大。
//
//输入格式
//第一行为两个整数N，M，表示N×N的方格图，M个格子中放有数字。
//
//接下来的每行有三个整数，第一个为行号数x，第二个为列号数y，第三个为在该行、该列上所放的数z。
//
//输出格式
//一个整数，表示一条路径上取得的最大的和。
//
// j
// ^
// | A
// | ^
// | |
// | 3 0 0
// | 2 1 0
// | 4 5 6->B
//-----------> i
//动态规划问题
//dp[i][j] += max(dp[i][j-1],dp[i-1][j-1])
#include<bits/stdc++.h>
using namespace std;
int dp[105][105];
int main()
{
  	int n,m;
  	cin >> n >> m;
  	for(int k = 1 ; k <= m ; k++)
  	{
    	int x , y;
    	cin >> x >> y;
    	cin >> dp[x][y];
 	 }
    	
  	for(int i = 1 ; i <= n ; i++)
  	{
    	for(int j = 1 ; j <= n ; j++){
	      dp[i][j] += max(dp[i-1][j],dp[i][j-1]);
    	}
        
	  }
	  cout << dp[n][n];
}