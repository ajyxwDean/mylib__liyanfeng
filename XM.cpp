#include <bits/stdc++.h>

using namespace std;

int XM(int x){
    if(x==0){
        return -1;
    }else if(x==1){
        return 1;
    }else if(x>1){
        return x+XM(x-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << XM(n) << endl;
    return 0;
}