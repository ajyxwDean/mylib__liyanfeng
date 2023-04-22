#include<bits/stdc++.h>
using namespace std;
struct node {
	int from,to,len;
}
a[1005];
int n,m,s;
int d[1005];
int main() {
	scanf("%d %d %d",&n,&m,&s);
	for (int i=1;i<=n;i++)d[i]=25000000;
	for (int i=1;i<=m;i++) {
		scanf("%d %d %d",&a[i].from,&a[i].to,&a[i].len);
	}
	d[s]=0;
	int from,to,len;
	for (int k=0;k<n;k++) {
		for (int i=1;i<=m;i++) {
			from=a[i].from,to=a[i].to,len=a[i].len;
			if(d[to]>d[from]+len) {
				d[to]=d[from]+len;
				if(k==n-1) {
					printf("no solution");
					return 0;
				}
			}
		}
	}
	for (int i=1;i<=n;i++) {
		if(d[i]==25000000) d[i]=-1;
		cout<<d[i]<<" ";
	}
}