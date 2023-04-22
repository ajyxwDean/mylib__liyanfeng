#include <bits/stdc++.h>
using namespace std;
struct bigNum
{
    string a,b;
    string ans;
    int aint[10005],bint[10005];
    int cint[10005];
    void read();
    void change();
    void clear();
    void add();
    void print();
};

void bigNum::read()
{
    //freopen("fight.in","r",stdin);
    cin >> a >> b;
}

void bigNum::clear()
{
    memset(cint,0,sizeof(cint));
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
}

void bigNum::add()
{
    read();
    change();
    for(int i = max(a.size(), b.size()); i >= 1; i++)
    {
        cint[i] = aint[i] + bint[i];
        if(cint[i] >= 10)
        {
            cint[i - 1] += 1;
            cint[i] %= 10;
        }
    }
}