#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long b[100005];
long long l,r,mid,x,n,q,m;
int fin1(int q)
{
	l=1,r=n;
	while(l<=r) {
			mid=(r+l)/2;
			if(a[mid]==q) {
				return 1;
			} else if(a[mid]<q) {
				l=mid+1;
			} else {
				r=mid-1;
			}
		}
	return 0;
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	for(int i=1; i<=m; i++) {
		cin>>b[i];
	}
	sort(a,a+n+1);
	sort(b,b+m+1);
	int flag=0;
	for(int i=1;i<=m;i++)
	{
		if(fin1(b[i]))
		{
			flag=1;
			cout<<b[i]<<' ';
		}
	}
	if(flag==0)
	{
		cout<<-1;
	}
	return 0;
}
/*
10
1 3 5 7 9 11 13 15 17 19
2
*/
/*
5
1 3 4 5 7
3
4 5 0
*/
