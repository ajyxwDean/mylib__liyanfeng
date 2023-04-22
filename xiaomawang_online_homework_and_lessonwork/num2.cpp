//
//
//
//
//
//
//
//
//
//
//
//
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q[1005] = {0}; //齐威王
    int t[1005] = {0}; //田忌
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&t[i]);
    }
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&q[i]);
    }
    sort(q,q+n);
    sort(t,t+n);
    int tmin = 0,tmax = n-1;
    int qmin = 0,qmax = n-1;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(t[tmin] < q[qmin]){
            ans-=200;
            qmax--;
            tmin++;
        }else{
            ans+=200;
            qmin++;
            tmin++;
        }

    }
    printf("%d",ans);
    return 0;
}