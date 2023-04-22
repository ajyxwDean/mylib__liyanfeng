//桶排序
//bucket_sort
#include <bits/stdc++.h>
using namespace std;
int a[10001];
int t[1010];
int main(){
    int n;
    scanf("%d",&n);
    for (size_t i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) t[a[i]]++;
    for(int i = 1; i < 1000; i++) 
        while (t[i])
        {
            /* code */
            printf(" %d ",i);
            t[i]--;
        }
        
    return 0;
}