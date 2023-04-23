#include <bits/stdc++.h>
using namespace std;
struct bigNum
{
    int la,lb,lc;
    int aint[10005],bint[10005];
    int cint[10005];
    void read();
    void change();
    void clear();
    void add();
    void print();
    string a,b,ans;
};

void bigNum::read()
{
    //freopen("fight.in","r",stdin);
    cin >> a >> b;
}

void bigNum::clear()
{
    memset(cint,0,sizeof(cint));
    memset(aint,0,sizeof(aint));
    memset(bint,0,sizeof(bint));
    la = a.size();
    lb = b.size();
}

void bigNum::change()
{
    for(int i = 0; i < a.size(); i++)
    {
        aint[i] += a[i] - '0';
    }
    for(int i = 0; i < b.size(); i++)
    {
        bint[i] += b[i] - '0';
    }
    lc = la > lb ? la : lb;
}

void bigNum::add()
{
    for(int i = 0; i < lc; i++)
    {
        cint[i] = aint[i] + bint[i] + cint[i];
        if(cint[i] >= 10)
        {
            cint[i + 1] ++;
            cint[i] %= 10;
        }
    }
    if(cint[lc] > 0) lc++;
}

void bigNum::print()
{
    for(int i = lc - 1; i >= 0; i++)
    {
        cout << cint[i];
    }
}