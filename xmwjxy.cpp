#include <bits/stdc++.h>

using namespace std;
//A=65 a=97 '1'=49 

struct Node{
    int a;
    int b;
    int c;
    void Sort();
    void swap(int type);
    void Calc();
    int gcd(int ac,int bc);
};

void Node::Sort(){
    if(a>b && b>c){

        //a b c
        return ;
    }else if(b>c&&a<b){
        if(a>c){
            // b a c
            swap(a,b);
        }else{
            // b c a
            swap(c,b);
            swap(a,b);
        }
    }else{
        //a b c
        //c b a
        //c a b
        //a c b
        if(c>b&&b>a&&c>a){
            swap(a,c);
        }else if(c>b&&a>b&&c>b){
            swap(a,c);
            swap(a,b);
        }else{
            swap(b,c);
        }
    }
    return;
}

void Node::swap(int type){
    if(type == 1){
        swap(a,b);
    }else if(type == 2){
        swap(b,c);
    }else{
        swap(a,c);
    }
}

int Node::gcd(int ac,int bc){
    int ans=1;
    for(int i = 1 ; i < min(ac,bc) ; i++){
        if(ac%i==0&&bc%i==0){
            ans = i;
        }
    }
    return ans;
}

void Node::Calc(){
    return gcd(a,b)*gcd(b,c)%100000+a+b+c;
}

int main(){

    return 0;
}
//200ms 64M
