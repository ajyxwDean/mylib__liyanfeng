#include <bits/stdc++.h>
using namespace std;
void pwd(long long n, long long m){
    int Max = 0;
    for(int i = 0; i < max(n,m); i++){
        if(n%i == 0 && m % i == 0){
            Max = max(Max, i);
        }
    }
}
int main(){

    return 0;
}