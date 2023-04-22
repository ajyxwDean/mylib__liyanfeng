

#include <bits/stdc++.h>//ok
#include <cstring>//ok
using namespace std;//ok
struct Peo{
	string name;//?? ok 
	string sosss;//???? ok
};//ok

int cnt[5005], n,mx;//ok(?)
string mxname[5005];//ok
int mxnamei = 1;//ok
Peo people[5005];//ok
int main()//ok
{//ok
	cin >> n;//ok
	for(int i = 0; i < n; i++)//ok
	{//ok
		cin >> people[i].name;//ok
		cin >> people[i].sosss;//ok
	}//ok
	string p = "sos";
	for(int j = 0; j < n; j++)
	{
		for(int i = 0; i < people[i].sosss.size(); i++)
		{
			if(people[j].sosss[i] == 's' && people[j].sosss[i + 1] == 'o' && people[j].sosss[i + 2] == 's') cnt[j] ++;;//
			#ifdef DEBUG
				cout << cnt[j];
			#endif
		}
		if(cnt[j] > mx)//
		{
			mx = cnt[j];//
			mxname[mxnamei] = people[j].name;//
		}else if(cnt[j] == mx)//
		{
			++ mxnamei - 1;//
			mxname[mxnamei - 1] = people[j].name;//
		}
	}
	for(int i = 0; i < mxnamei; i++)
	{
		cout << mxname[mxnamei - 1];//
	}
	cout << endl << mx;//
	return 0;
}

