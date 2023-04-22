   // 1: 把这个三角形上下颠倒过来，代码该怎么修改？如下：
   //  *****
   //   ***
   //    *

#include <iostream>

using namespace std;

int main(){
    int nLineNum = 0;
    int n;
    cin >> n;
    nLineNum = n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < nLineNum ; j++){
            cout << "*";
        }
        cout << "\n";
        nLineNum -= 1;
    }
    return 0;
}