#include<bits/stdc++.h>
using namespace std;
struct node {
	int a,b,c;
}s[100000];
int f[100000];
int cmp(node s1,node s2) {
	return s1.c<s2.c;
}
int find(int x) {
	if(f[x]!=x) {
		f[x]=find(f[x]);
	}
	return f[x];
}
int main() {
	int n,m,ans=0;
	scanf("%d%d",&n,&m);
	for (int i=1;i<=n;i++)
	    f[i]=i;
	for (int i=1;i<=m;i++) {
		scanf("%d%d%d",&s[i].a,&s[i].b,&s[i].c);
	}
	sort(s+1,s+1+m,cmp);
	for (int i=1;i<=m;i++) {
		int f1=find(s[i].a),f2=find(s[i].b);
		if(f1!=f2) {
			f[f2]=f1;
			if(s[i].c>ans)
			        ans=s[i].c;
		}
	}
	printf("%d",ans);
}

