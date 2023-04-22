#include <bits/stdc++.h>
using namespace std;
struct node{
    int lson, rson;
}a[1000005];

void xx(int root){
    cout << root << " ";
    if(a[root].lson != 0) xx(a[root].lson);
    if(a[root].rson != 0) xx(a[root].rson);
}

void zx(int root){
    if(a[root].lson != 0) zx(a[root].lson);
    cout << root << " ";
    if(a[root].rson != 0) zx(a[root].rson);
}

void hx(int root){
    if(a[root].lson != 0) hx(a[root].lson);
    if(a[root].rson != 0) hx(a[root].rson);
    cout << root << " ";
}

int main(){
    int n,a1,b,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a1 >> b >> c;
        a[a1].lson = b;
        a[a1].rson = c;
    }
    xx(1); cout << endl;
    zx(1); cout << endl;
    hx(1); cout << endl;
    
    return 0;
}