#include<bits/stdc++.h>
using namespace std;
int n,x;
map<int,int> a;
int ans=-1,mc=100000000;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(a.count(x))
		{
			if(mc>i-a[x])
			{
				mc=i-a[x];
				ans=x;
			}
			
		}
		a[x]=i;
	}
	if(ans==-1)
	{
		cout<<"No";
	}else{
		cout<<ans;
	}
    return 0;
}

