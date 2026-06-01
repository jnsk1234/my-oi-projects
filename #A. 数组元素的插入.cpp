#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int n,x,y,opt,z,m;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>z;
		a.push_back(z);
	}
	for(int i=1;i<=m;i++)
	{
		cin>>opt;
		if(opt==2)
		{
			cin>>x;
			a.erase(a.begin()+x-1);
		}
		if(opt==1)
		{
			cin>>x>>y;
			a.insert(a.begin()+x,y);
		}
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<' ';
	}
	
    return 0;
}

