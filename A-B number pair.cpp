#include<bits/stdc++.h>
using namespace std;
int n,c,d[200001],num;
int check(int a,int b,int temp){
  if(a-b==temp)return true;
  return false;
}
int main(){
  cin>>n>>c;
  for(int i=0;i<n;i++){
    cin>>d[i];
  }
  sort(d,d+n);
  for(int i=0;i<n;i++){
    num+=(upper_bound(d,d+n,d[i]+c)-lower_bound(d,d+n,d[i]+c));
  }
  cout<<num;
  return 0;
}