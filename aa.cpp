#include <bits/stdc++.h>
using namespace std;
const int Maxn=10005;
int n,b[Maxn];
inline void mergesort(int *a,int l,int r){
    if(l==r) return;
    int mid=(l+r)>>1;
    mergesort(a,l,mid),mergesort(a,mid+1,r);
    int i=l,j=mid+1,cnt=0;
    while (i<=mid&&j<=r)
    {
        if(a[i]<=a[j]) b[cnt++]=a[i++];
        else b[cnt++]=a[j++];
    }
    while(j<=mid) b[cnt++]=a[i++];
    while(j<=r) b[cnt++]=a[j++];
    for(int i = l ; i <= n ; i++) a[i]=b[i-l+1];
    
}
int a[Maxn];
int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    mergesort(a,1,n);
    for(int i = 1 ; i <= n ; i++) cout << a[i] << (i==n ? '\n' : ' ');
    system("pause");
    return 0;
}