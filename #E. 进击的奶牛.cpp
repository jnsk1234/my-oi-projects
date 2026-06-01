#include<bits/stdc++.h>
using namespace std;
int N,C,a[100005];
int chark(int x)
{
	int zuo=a[1],cnt=0;
	for(int i=2;i<=N;i++)
	{
		if((a[i]-zuo)<x)
		{
			cnt++;
		}
		else{
			zuo=a[i];	
		}
	}
	return N-C>=cnt;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>N>>C;
	for(int i=1;i<=N;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+N+1);
	int l=1,r=a[N],mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(chark(mid))
		{
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<l-1;
	return 0;
}
/*
7 3
1
2
3
4
5
6
7
*/
