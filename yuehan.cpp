#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a[25];
    a[1]=1;
    //请补全：第2、3天的母猪数量
    a[2] = 2;
    a[3] = 3;
    for(int i=4;i<=20;i++){
        //请补全：计算第i天的母猪数量
        a[i] = a[i - 1] + a[i - 2];
    } 
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }
    return 0;
}