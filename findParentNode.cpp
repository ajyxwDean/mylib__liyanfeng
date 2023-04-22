#include <bits/stdc++.h>
using namespace std;
int dad[1000005];
int main(){
    int n;
    cin >> n;
    int a,b;
    for (int i = 2; i <= n; i++)
    {
        cin >> a >> b;
        dad[a] = b;
        dad[b] = a;
    }
    for (int i = 2; i <= n; i++)
    {
        cout << dad[i] << " ";
    }
    
    
    return 0;
}