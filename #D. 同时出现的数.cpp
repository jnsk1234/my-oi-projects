#include<bits/stdc++.h>
using namespace std;
map<int,int> a;
vector<int> b;
int n,m,x;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x;
		b.push_back(x);
	}
	sort(b.begin(),b.end());
	int flag=1;
	for(auto i:b)
	{
		if(a.count(i))
		{
			cout<<i<<' ';
			flag=0;
		}
	}
	if(flag)
	{
		cout<<-1;
	}
    return 0;
}

