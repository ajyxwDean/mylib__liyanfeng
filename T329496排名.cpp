#include <bits/stdc++.h>
using namespace std;
void print(int flag)
{
	char sh = char(34);
	if(flag == 1)
	{
		printf("%c",sh);
		printf("\\n");
		printf("%c",sh);
	}
	else
	{
		printf("%c",sh);
		printf("\\t");
		printf("%c",sh);
	}
	
}
int main()
{
	int a1,a2,b1,b2;
	cin >> a1 >> a2 >> b1 >> b2;
	if(a1 > b1)
	{
		print(1);
	}
	else if(a1 < b1)
	{
		print(2);
	}else if(a1 == b1)
	{
		if(a2 < b2)
		{
			print(1);
		}else if(a2 > b2)
		{
			print(2);
		}
	}
	return 0;
}
