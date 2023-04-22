#include<iostream>
#include<algorithm>
using namespace std;
int w[30],v[30],f[50000];//w数组为重要度，v数组为money，f是用来dp的数组
int n,m;//n是总物品个数，m是总钱数
int main()
{
    cin>>m>>n;//输入
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
        w[i]*=v[i];//w数组在这里意义变为总收获（重要度*money）
    }
       //01背包（参照第二类模板“一维数组优化”）
    for(int i=1;i<=n;i++)
    {
        for(int j=m;j>=v[i];j--)//注意从m开始
        {
            if(j>=v[i])
            {
                f[j]=max(f[j],f[j-v[i]]+w[i]);//dp
            }
        }
    }
    cout<<f[m]<<endl;//背包大小为m时最大值
    return 0;
} 
//开心的金明题解