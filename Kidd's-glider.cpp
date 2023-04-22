#include<bits/stdc++.h>
using namespace std;
int dp[1005],h[50005],n,ans;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    for(int k=0; k<=n-1; k++){
    	for(int i=k; i<n; i++){
    	    dp[i]=1;
    	    for(int j=k; j<i; j++){
    	        if(h[i]<h[j]){
    	            dp[i]=max(dp[i],dp[j]+1);
    	        }
    	    }
    	    ans=max(ans,dp[i]);
    	}
    }
    for(int k=n-1; k>=0; k--){
    	for(int i=k; i>=0; i--){
    	    dp[i]=1;
    	    for(int j=k; j>i; j--){
    	        if(h[i]<h[j]){
    	            dp[i]=max(dp[i],dp[j]+1);
    	        }
    	    }
    	    ans=max(ans,dp[i]);
    	}
    }
    cout << ans;
	system("pause");
    return 0;
}