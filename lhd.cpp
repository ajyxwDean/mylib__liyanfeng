#include <bits/stdc++.h>

using namespace std;

int n;
int qs[100];
int numBing[100];
int m,p1,s1,s2;

int main(){
    memset(qs,0,sizeof(qs));
    memset(numBing,0,sizeof(numBing));
    freopen("lhd.in","r",stdin);
    freopen("lhd.out","w",stdout);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> numBing[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    for(int i = 0 ; i < n ; i++){
        qs[i] = numBing[i] * fabs(double(i-m));
    }
    numBing[p1] += s1;
    qs[p1] = fabs(p1 - m) * numBing[p1];
    
    return 0;
}