#include<bits/stdc++.h>
using namespace std;
struct node{
    int lson,rson;
}a[1000005]; 
int ans; //最大深度
void dfs(int rt,int deep){
    //请补全：向左遍历 
  	if(a[rt].lson) dfs(a[rt].lson,deep+1);
    if(a[rt].rson) dfs(a[rt].rson,deep+1);
    //请补全：更新最大深度
	ans = max(ans, deep);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].lson>>a[i].rson;
    }
    dfs(1,1); 
    cout<<ans;
}