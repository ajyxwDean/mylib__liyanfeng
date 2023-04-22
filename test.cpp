#include <bits/stdc++.h>
#include "mylib.h"

using namespace std;

int main(){
    int n,a[100];
    int flag=0;
    int target;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",(a+i));
    }
    scanf("%d",&target);
    sort(a,a+n);
    int l=0,r=n-1;
    int mid;
    while(l<=r){
        mid=(l+r)/2;
        if(target < a[mid]){
            //small
            r=mid-1;
        }else if(target > a[mid]){
            l=mid+1;
        }else{
            cout << mid+1;
            flag=1;
            break; 
        }
    }
    if(flag==0){
        cout << -1;
    }
    system("pause");
    return 0;
}