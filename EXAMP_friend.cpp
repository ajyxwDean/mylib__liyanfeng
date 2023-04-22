#include <bits/stdc++.h>
using namespace std;
class A;


class A
{
public:
    friend int Add(int a, A& b);
    void setA(A& b, int aaaa, int bbbb);
    void Show();
private:
    int aaa, bbb;
};

int Add(int a, A& b)
{
    a += b.bbb;
    a += b.aaa;
    return a;
}

void A::setA(A& b, int aaaa, int bbbb)
{
    b.aaa = aaaa;
    b.bbb = bbbb;
}

void A::Show()
{
    cout << this->aaa << " " << this->bbb << endl;
}

int main()
{
    A aaaaaa;
    aaaaaa.setA(aaaaaa, 112, 103);
    aaaaaa.Show();    
    cout << Add(1, aaaaaa);
    return 0;

}