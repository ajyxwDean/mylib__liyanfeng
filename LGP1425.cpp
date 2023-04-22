#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    //a时b分
    //c时d分
    //e f
    int ans_f,ans_s,flag=0;
    if(d-b < 0){
        ans_f = d+60-b;
        flag = 1;
    }else{
        ans_f = d-b;
    }
    if(flag == 1){
        ans_s = c-a-1;

    }else{
        ans_s = c-a;
    }
    cout << ans_s <<" " << ans_f;
    return 0;
}