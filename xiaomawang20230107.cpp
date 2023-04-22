#include<bits/stdc++.h>
using namespace std;
struct node{
  int to; 
  int len;
};
vector<node> v[10005];
int n,m,s,a,b,c;
long long d[10005];
int vis[10005]; 
int main(){
    scanf("%d %d %d",&n,&m,&s);
    for(int i=1;i<=n;i++) d[i]=2147483647;
    for(int i=0;i<m;i++){
    scanf("%d %d %d",&a,&b,&c);
    v[a].push_back((node){b,c});
     }
     d[s]=0;
    for(int i=0;i<n;i++){
     long long mn=2147483647;
     int id;
    for(int j=1;j<=n;j++){
    if(!vis[j]&&d[j]<mn){
    mn=d[j],id=j;
    } 
    } 
    vis[id]=1;
 for(int j=0;j<v[id].size();j++){
int to=v[id][j].to,len=v[id][j].len;
  if(!vis[to]&&d[to]>d[id]+len){
  d[to]=d[id]+len;
  }
 }
 }
 for(int i=1;i<=n;i++){
  if(d[i]==2147483647)d[i]=-1;
 printf("%lld ",d[i]);
 }
  return 0;
}