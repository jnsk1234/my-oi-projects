#include<bits/stdc++.h>
using namespace std;
map<char,vector<int>> m;
int n,s;
string a;
char ans;
int mx=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>a;
		for(auto j:a)
		{
			a[j].push_back(s);
		}
	}
	
	for(auto i:m)
	{
		if(mx<i.second.size())
		{
			mx=i.second.size();
			ans=i.first;
		}
	}
	cout<<ans<<endl<<mx<<endl;
	for(auto i:m)
	{
		if(m.first==ans)
		{
			for(auto j:m.second)
			{
				cout<<j<<endl;
			}
		}
	}
    return 0;
}

