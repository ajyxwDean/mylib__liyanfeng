#include <bits/stdc++.h>
using namespace std;
string a,b;
int B;
int shia,shib;
int main()
{
	cin >> B;
	cin >> a >> b;
	int lena = a.size(), lenb = b.size();
	cout << "lenna = ";
	for(int i = lena; i >= 0; i--)
	{
		int lenn = lena - i;
		shia += pow(B,lenn);
		cout << lenn << " ";
		if(lenn == a.size())
			break;
	}
	cout << endl;
	cout << "lennb = ";
	for(int i = lenb; i >= 0; i--)
	{
		int lenn = lenb - i;
		shib += pow(B,lenn);
		cout << lenn << " ";
		if(lenn == b.size())
			break;
	}  
	cout << endl;
	cout << "shia = " << shia << " shib = " << shib;
	return 0;
}
