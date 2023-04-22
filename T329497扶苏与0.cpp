#include <bits/stdc++.h>
using namespace std;
char a[100000];
int cnt=0;
int main()
{
	cin >> a;
	for(int i = strlen(a) - 1; i >= 0; i--)
	{
		switch(a[i] - '0')
		{
			case 2:{
				cnt++;
				break;
			}
			case 6:{
				cnt++;
				break;
			}
			case 8:{
				cnt+=2;
				break;
			}
			case 9:{
				cnt ++;
				break;
			}
			case 0:{
				cnt ++;
				break;
			}
		}
	}
	cout << cnt;
}
