#include <bits/stdc++.h>
using namespace std;
int cmp(char a, char b)
{
	return int(a) < int(b);
}
bool cmpHomework(string x, string y)
{
	string x1 = x,y1 = y;
	sort(x1.c_str(),x1.c_str() + x1.size(),cmp);
	sort(y1.c_str(),y1.c_str() + y1.size(),cmp);
	if(x1 == y1)
	{
		return true;
	}else{
		return false;
	}
}
struct node
{
	int id;
	string aa;	
};
node a[100000];
node findnode(int id,int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i].id == id)
		{
			return a[i];
		}
	}
}
int n,m;
int main()
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i].aa;
		a[i].id = i + 1;
	}
	int a,b,c;
	for(int i = 0; i < m; i++)
	{
		cin >> a >> b >> c;
		if(a == 1)
		{
			findnode(b,n).aa = findnode(b,n).aa + findnode(c,n).aa;
		}else{
			if(cmpHomework(findnode(b,n).aa, findnode(c,n).aa))
				cout << "Yes" << endl;
			else
				cout << "No\n";
		}
	}
	return 0;
}
