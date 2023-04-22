//P7932 [COCI2007-2008#5] TRI
#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if(a + b == c) printf("%d + %d = %d" ,a, b, c);
    else if(a - b == c) printf("%d - %d = %d" ,a, b, c);
    else if(a * b == c) printf("%d * %d = %d" ,a, b, c);
    else if(a / b == c) printf("%d / %d = %d" ,a, b, c);
    else if(b + c == a) printf("%d + %d = %d", b, c, a);
    else if(b - c == a) printf("%d - %d = %d", b, c, a);
    else if(b * c == a) printf("%d * %d = %d", b, c, a);
    else if(b / c == a) printf("%d / %d = %d", b, c, a);
    return 0;
}