#include<bits/stdc++.h>
using namespace std;
char a[3][3],b[3][3];
int n=3,ans1,ans2; 
int main() {
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==b[i][j]) 
                ++ans1;
            else {
                bool flag=false; 
                for(int k=0;k<n&&!flag;k++) 
                    for(int l=0;l<n&&!flag;l++) 
                        if(a[i][j]==b[k][l]&&a[k][l]!=b[k][l]) 
                            ++ans2,b[k][l]=' ',flag=true; 
            }
    printf("%d\n%d",ans1,ans2);
    return 1;
}