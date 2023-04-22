#include <bits/stdc++.h>
using namespace std;
int B;
int a_int[10005],b_int[10005];
string a,b;
int main()
{
    cin >> B;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] >= 'A')
        {
            a_int[i] = 10 + a[i] - 'A' + 1;
        }else{
            a_int[i] = a[i] - '0';
        }
    }
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] >= 'A') b_int[i] = 10 + b[i] - 'B' + 1;
        else b_int[i] = b[i] - '0';
    }

    for(int i = 0; i < a.size(); i++)
    {
        
    }
    return 0;
}