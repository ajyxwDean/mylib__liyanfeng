#include <iostream> 
using namespace std;
int main(){
    const int SIZE = 100;
    int height[SIZE], num[SIZE], n, ans;//定义变量
    cin >> n;//输入n
    for (int i = 0; i < n; i++) {//i 0~n 循环
        cin >> height[i];//输入height[i]
        num[i] = 1;
        for (int j = 0; j < i; j++) {
            if ( (height[j] < height[i]) && (num[j] >= num[i]) ){
                num[i] = num[j]+1;
            }
        }
    }
    ans = 0;
    for (int i = 0; i < n; i++){ 
        if (num[i] > ans) {
            ans = num[i];
        }
    }
    cout<<ans<<endl;
}
/*
 SIZE = 100
 


*/