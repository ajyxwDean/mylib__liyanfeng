#include<bits/stdc++.h>
using namespace std;  
int f[5005],n,m,k,x,y;
int find(int x){
    // 补全find函数
    if(f[x] != x) f[x] = find(f[x]);
    return f[x];
}
void merge(int a,int b){
    // 补全merge函数
    int f1 = find(a), f2 = find(b);
    if(f1 != f2) f[f2] = f1;
}
int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        merge(x,y);
    }
    while(k--){
        scanf("%d %d",&x,&y);
        // 补全条件：如果x和y的祖先相同
        if(find(x) == find(y)) printf("Yes\n");
        else printf("No\n");
  }
}