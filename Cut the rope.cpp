#include<bits/stdc++.h>
using namespace std;
double s[100001]; // 保存绳子长度
int len[100001],n,k; // n条绳子，切成k段
int check(int x){ // 检查是否达到k段,达到返回1
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=len[i]/x;
    }
    return cnt>=k;
}
int main(){
    double sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%lf",&s[i]);
        len[i]=s[i]*100; 
        if(len[i]>sum) sum=len[i];
    }
    int l=1,r=sum,mid;
    while(l<=r){
        mid = (l+r)/2; // 补全代码：mid的值
        if(check(mid)){ // 补全代码：根据代码补充条件
            l=mid+1;
        }else r=mid-1;
    }
    // 补全代码：输出结果
    printf(".2lf\n",(l-1)/100.00);
    return 0;
}