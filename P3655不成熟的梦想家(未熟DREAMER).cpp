#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,q,s,t;
ll ans = 0;
ll a[100005],f[100005];
ll js(ll n){
    return n>0?-s*n:-t*n;
}
int main()
{
    scanf("%d %d %d %d",&n,&q,&s,&t);
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
	}
	f[0] = a[0];
	for(int i = 0; i < n; i++)
	{
		f[i] = a[i] - a[i - 1];
		ans += js(d[i]);
	}
	//a[i] = f[i] + a[i - 1]
	while(q--)
	{
		scanf("%d %d %d",x,y,z);
		
	}
    return 0;
}
