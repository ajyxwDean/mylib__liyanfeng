#include <bits/stdc++.h>
using namespace std;
long long cnt=0;
const long long MODD = 1e9+7;
string s;
int main()
{
	cin >> s;
	for(int i = 0; i < s.size() - 6; i++)
	{
		if(s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'i' && s[i + 3] == 'a' && s[i + 4] == 'o' && s[i + 5] == 'm' && s[i + 6] == 'a')
		{
			cnt++;
		}
	}
	cnt %= MODD;
	cout << cnt;
	return 0;
}
