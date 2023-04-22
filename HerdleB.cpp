
/*#include<bits/stdc++.h>
using namespace std;
char a[3][3],b[3][3];
int n=3,ans1,ans2; 
int main() {
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[i][j]) 
                ++ans1;
            else {
                bool flag=false; 
                for(int k=0;k<n&&!flag;k++) 
                    for(int l=0;l<n&&!flag;l++) 
                        if(a[i][j]==b[k][l]&&a[k][l]!=b[k][l]) 
                            ++ans2,b[k][l]=' ',flag=true; 
            }
    printf("%d\n%d",ans1,ans2);
    return 1;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define enter() putchar(10)
#define debug(c,que) cerr<<#c<<" = "<<c<<que
#define cek(c) puts(c)
#define blow(arr,st,ed,w) for(register int i=(st);i<=(ed);i++)cout<<arr[i]<<w;
#define speed_up() cin.tie(0),cout.tie(0),ios::sync_with_stdio(false)
#define endl "\n"
#define Input_Int(n,a) for(register int i=1;i<=n;i++)scanf("%d",a+i);
#define Input_Long(n,a) for(register long long i=1;i<=n;i++)scanf("%lld",a+i);
#define mst(a,k) memset(a,k,sizeof(a))

namespace Newstd
{
	inline int read()
	{
		int x=0,k=1;
		char ch=getchar();
		while(ch<'0' || ch>'9')
		{
			if(ch=='-')
			{
				k=-1;
			}
			ch=getchar();
		}
		while(ch>='0' && ch<='9')
		{
			x=(x<<1)+(x<<3)+ch-'0';
			ch=getchar();
		}
		return x*k;
	}
	inline void write(int x)
	{
		if(x<0)
		{
			putchar('-');
			x=-x;
		}
		if(x>9)
		{
			write(x/10);
		}
		putchar(x%10+'0');
	}
}
using namespace Newstd;
using namespace std;
const int ma=5;
int tong[ma];
bool vis[ma][ma];
char a[ma][ma],b[ma][ma];
int G,Y;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
	for(register int i=1;i<=3;i++)
	{
		scanf("%s",a[i]+1);
	}
	for(register int i=1;i<=3;i++)
	{
		for(register int j=1;j<=3;j++)
		{
			tong[a[i][j]-'A'+1]++;
		}
	}
	for(register int i=1;i<=3;i++)
	{
		scanf("%s",b[i]+1);
	}
	for(register int i=1;i<=3;i++)
	{
		for(register int j=1;j<=3;j++)
		{
			if(a[i][j]==b[i][j])
			{
				vis[i][j]=true;

				G++;

				tong[a[i][j]-'A'+1]--;
			}
		}
	}
	for(register int i=1;i<=3;i++)
	{
		for(register int j=1;j<=3;j++)
		{
			if(tong[b[i][j]-'A'+1]>=1 && vis[i][j]==false)
			{
				Y++;
				tong[b[i][j]-'A'+1]--;
			}
		}
	}
	printf("%d\n%d\n",G,Y);
	return 0;
}