#include<bits/stdc++.h>
#define int long long
using namespace std;

map<int,int> m;//ÓÐ³åÍ»
int n,x,t,cnt;
vector <int> a; 
signed main()
{
	cin>>n>>t;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(int i=1;i<=a.size();i++)
	{
		if(!m.count(a[i]))
		{
			cnt++;
			m[a[i]]=1;
			m[a[i]*t]=1;
		}
	}
	cout<<cnt;
    return 0;
}

