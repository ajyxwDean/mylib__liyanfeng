#include <bits/stdc++.h>
using namespace std;
void sort_STL(int *begin, int *end){
    sort(begin,end); 
    for(int i = 0; i < (end - begin); i++){
        printf("%d ",begin[i]);
    }
}
int main(){
    int a[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort_STL(a,a+n);
    return 0;
}




void Quick_sort(){



    return;
}