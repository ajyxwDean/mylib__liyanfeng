//BankMoney.cpp 1s 100MB
#include<cstdio>
using namespace std;
int main(){
    double d,m;  
    scanf("%lf",&d);
    //请补全：计算最少存款
    m = 0;
    for(int i = 0; i < 48; i++)
    {
        m = (m + d) / (1 + 0.0014);
    }
    printf("%.1lf",m);
}