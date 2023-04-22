//P8038 [COCI2016-2017#7] BAZA
#include <bits/stdc++.h>
using namespace std;
//k[] a[][] i j l n m q cnt
//chk(int ) return bool
const int SIZE = 1005;
int k[SIZE], a[SIZE][SIZE], i, j, l, n, m, q;
bool chk(int line)//need: m k[] a[][]
{
    for(int i = 0; i < m; i++)
    {
        if(k[i] != -1 && a[line][i] != -1 && k[i] != a[line][i])
            return false;
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> q;
    //输入
    for(i = 0; i < q; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> k[j];
        }
        int cnt = 0;
        for(l = 0; l < n; l++)
        {
            if(chk(l)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}