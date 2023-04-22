#include<bits/stdc++.h>
using namespace std;
int f[10000+6];
int find(int x){
    if(f[x]!=x){
        // 补全代码
        f[x] = find(f[x]);
    }
    return f[x];
}
void merge(int a,int b){
    int f1=find(a),f2=find(b);
    if(f1!=f2){
        // 补全代码
        f[f2] = f1;
    }
}
int main(){
    int n,m,a,b,c;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        // 初始化f数组
        f[i]=i;
    }
    for(int i=0;i<m;i++){
        scanf("%d %d %d",&c,&a,&b);
        if(c==1) merge(a,b);
        else if(find(a)==find(b)) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}