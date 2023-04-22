#include <bits/stc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if(a <= 150)
	{
		printf("%,1lf",a * 0.4463);
	}else if(150 < a <= 400)
	{
		printf("%.1lf",150 * 0.4463 + (a - 150) * 0.4663);
	}else if(a >= 401)
	{
		printf("%.1lf",150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663);
	}
	return 0;
}
