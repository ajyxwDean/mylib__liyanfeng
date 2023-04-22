#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
    int id=upper_bound(a,a+n,b[i])-a;
    if(id-1>=0&& fabs(a[id-1]-b[i])<=fabs(a[id]-b[i]))
      id--;
    cout<<a[id]<<" ";
  }
  system("pause");
  return 0;
}