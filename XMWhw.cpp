#include<bits/stdc++.h>
using namespace std;
int mp[1111][1111];
int ans[1111],n;
int vis[1111];
void dfs(int rt){
    int res=0;
    vis[rt]=1;
    for(int i=1;i<=n;i++){
        //请补全：未标记
        if(!vis[i]&&mp[rt][i]==1){
            dfs(i);
            res++;
        }
    }
    //请补全：记录结果
    
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;
            scanf("%1d",&x);
            //请补全：建立树
            x = mp[i][j]; //Create Tree
        }
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        printf("%d ",ans[i]);
    }
}