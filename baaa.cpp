#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main(){
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
        for(int i=1; i<=m; i++)
            cin>>b[i];
        sort(a+1,a+n+1);
        for(int i=1; i<=m; i++){
            int l=0,r=n;
            while(l<=r){
            // 从下一行开始，补全代码  
                int mid = (l + r) / 2;
                if(a[mid]<=b[i])
                // 从下一行开始，补全代码  
				l=mid+1;
                else
                // 从下一行开始，补全代码    
				r=mid-1;
            }
            if(b[i]<=a[1])
            // 从下一行开始，补全代码  
            
            else
            // 从下一行开始，补全代码    
			
    }
    cout<<ans;
    return 0;
}