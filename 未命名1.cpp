#include <bits/stdc++.h>
using namespace std;
int a[10005] = {1} ,b[10005],c[10005],ans,n,k,mx = -INT_MAX,mxi = -INT_MAX,x = 0;
int kkksc03;
void max_()
{
	for(int i = 0; i < kkksc03; i++)
	{
		if(c[i] > mx) {
			mxi = i;
			mx = c[i];
		}
	}
}
int main()
{
	kkksc03 = n;
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for(int i = 0; i < n; i++)
	{
		cin >> c[i];
	}
	max_();
	//x = 1 / b[mxi] * 2;
	//ans += mx;
	while(k>0)
	{
		x = 1 / b[mxi] * a[mxi] * (a[mxi] - 1);
		k--,kkksc03--;
		max_();
		ans += c[mxi];
	}
	cout << ans;
	return 0;
}
