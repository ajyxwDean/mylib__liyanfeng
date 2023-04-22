#include <bits/stdc++.h>
using namespace std;
/// @brief The Quick Power快速幂
/// @param a The base number
/// @param b The index number
/// @return The ans of Power
int quickPower(int a, int b)///是求a的b次方
{
	int ans = 1, base = a;//ans为答案，base为a^(2^n)
	while(b > 0)//b是一个变化的二进制数，如果还没有用完
    {
		if(b & 1)//&是位运算，b&1表示b在二进制下最后一位是不是1，如果是：
			ans *= base;//把ans乘上对应的a^(2^n)
		
        base *= base;//base自乘，由a^(2^n)变成a^(2^(n+1))
		b >>= 1;//位运算，b右移一位，如101变成10（把最右边的1移掉了），10010变成1001。现在b在二进制下最后一位是刚刚的倒数第二位。结合上面b & 1食用更佳
	}
	return ans;
}

const long long mod=10000000000;
const int N=2001;
int P, l=1, lb=1;

int a[N]= {},b[N]= {},c[N]={};

int cheng1() {
    memset(c,0,sizeof(c));
    for (int i = 1; i <= l; ++i)   {
        for (int j = 1; j <= lb; ++j) {
            c[i+j-1] += a[i] * b[j];
            c[i+j] += ( c[i+j-1] ) / 10;
            c[i+j-1] %= 10;
        }
    }
    int lc = l + lb;
    while( c[lc] == 0 ) -- lc;
    for(int i = 1;i <= lc; ++i){
        a[i] = c[i];
    }
    return lc>500?500:lc;
}
int cheng2() {
    memset(c,0,sizeof(c));
    for (int i = 1; i <= lb; ++i)   {
        for (int j = 1; j <= lb; ++j) {
            c[i+j-1] += b[i] * b[j];
            c[i+j] += ( c[i+j-1] ) / 10;
            c[i+j-1] %= 10;
        }
    }
    int lc = lb + lb;
    while( c[lc] == 0 ) -- lc;
    for(int i = 1;i <= lc; ++i){
        b[i] = c[i];
    }
    return lc>500?500:lc;
}

void power() {
    while( P ) {
        if( P & 1 ) l = cheng1 ( );
        P >>= 1;
        lb = cheng2 ( );
    }
}

int main()
{
    //log10 2 * p + 1
    memset( a, 0, sizeof(a));
    memset( a, 0, sizeof(b));
    scanf("%d",&P);
    printf("%d\n",int (P*log10(2.0)+1)); 
   /* //快速幂
    cout << quickPower(2, p);*/
    //高精度
    a[1] = 1;
    b[1] = 2;
    power();
    -- a[1];
    for (int i = 500; i >= 1; --i) {
        printf("%d",a[i]);
        if ( ! ( (i-1) % 50 ) ) printf("\n");
    }
    return 0;
}