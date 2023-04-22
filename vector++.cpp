/*#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > t;
vector<int> s[100005];
long long n,a,b,sum,max1 = -1;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        s[b].push_back(b);
    }
    for(int i = n; i >= 1; i--)
    {
        for(int j = 0; j < s[i].size(); j++)
        {
            sum += s[i][j];
            t.push(s[i][j]);
        }
        while (t.size() > i)
        {
            sum -= t.top();
            t.pop();
        }
        if (sum > max1)
        {
            max1 = sum;
        }
        
    }
    
    cout << max1;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main(){
    int n,m;
    cin>>n;
    stack<int>s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=1;i--){
        b[i]=max(a[i],b[i+1]);
    }
    for(int i=1;i<=n;i++){
    while(s.size()&&s.top()>b[i]){
            printf("%d ",s.top());
            s.pop();
        }
        s.push(a[i]);
    }
    while(s.size()){
        printf("%d ",s.top());
        s.pop();
    }
    printf("\n");
    return 0;
}