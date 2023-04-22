/*
1、不作任何处理；
2、在它的左边加上一个正整数,但该正整数不能超过原数的一半；
3、加上数后,继续按此规则进行处理,直到不能再加正整数为止。

*/
#include<bits/stdc++.h>
using namespace std;
int n;
int f[1001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i/2;j++){
            f[i]+=f[j]; 
        }
        f[i]++;
    }
    cout<<f[n];
    return 0;
}