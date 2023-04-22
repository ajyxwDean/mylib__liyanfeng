//
//
//【lower and upper bound】
//题目描述
//给你一个整数序列，有一系列的询问，每次询问给出一个整数num,问序列中等于num的数字有几个
//
//
//
//输入格式
//第一行输入一个整数n (1<=n<=100000)
//
//第二行输入n个整数ai, (1<=ai<=100000)
//
//第三行输入一个整数m,表示询问的个数 (1<=m<=100000)
//
//接下来m行每行一个整数bi,(0<=bi<=1000000)
//
//输出格式
//对于每个询问输出一个整数
//
//
//
//输入样例
//5
//1 2 3 4 5
//3
//1 3 5
//输出样例
//1
//1
//1
//
//
//
//
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100000];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int m;
    cin >> m;
    int key;
    for(int j=0;j<m;j++){
        cin >> key;
        int num1 = lower_bound(a,a+n,key)-a;   
        int num2 = upper_bound(a,a+n,key)-a;
        cout << num2 - num1 << endl;
    }
    return 0;
}