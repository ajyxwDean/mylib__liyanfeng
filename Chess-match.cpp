#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,k;
    int a[100001]={0},b[100001]={0}; // 数组a保存等级，数组b保存差值
    int sum=0; // 保存结果
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    // 补全代码：对等级排序 
    sort(a,a+n);
    // 补全代码：计算选手的等级差
    for(int i = 0 ; i < n-1 ; i++){
     	b[i]=a[i+1]-a[i];   
    }
    // 补全代码：对等级差值排序
    sort(b,b+n-1);
    // 补全代码：找出前K个等级差的和
    for(int i = 0 ; i < k ; i++){
     	   sum+=b[i];
    }
    // 补全代码：输出结果
    cout << sum;
    system("pause");
    return 0;
}