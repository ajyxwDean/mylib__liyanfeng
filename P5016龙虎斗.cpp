#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
class sto
{
    public:
        long long a,b,c;
};
int main()
{
    //freopen("fight.in","r",stdin);
    //freopen("fight.out","w",stdout);
    long long n;
    cin>>n;
    sto peo[n+1];
    for(long long i=1;i<=n;i++)
    {
        cin>>peo[i].a;
    }
    long long m,s1,s2,s3;
    cin>>m>>s1>>s2>>s3;
    peo[s1].a+=s2;
    for(long long i=1;i<=n;i++)
    {
        peo[i].b=abs(i-m);
        peo[i].c=peo[i].a*peo[i].b;
    }
    long long a=0,b=0;
    for(long long i=1;i<m;i++) a+=peo[i].c;
    for(long long i=m+1;i<=n;i++) b+=peo[i].c;
    //cout<<a<<" "<<b<<endl;
    long long ans=m,MIN,set;
    MIN=abs(a-b);
    for(long long i=1;i<m;i++)
    {
        set=abs(a+peo[i].b*s3-b);
        //cout<<set<<" "<<you1<<endl;
        if(set<MIN||(set==MIN&&ans==m))
        {
            MIN=set;
            ans=i;
        }
    }
    //cout<<endl;
    for(long long i=m+1;i<=n;i++)
    {
        set=abs(b+peo[i].b*s3-a);
        //cout<<set<<" "<<you1<<endl;
        if(set<MIN||(set==MIN&&ans==m))
        {
            MIN=set;
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
