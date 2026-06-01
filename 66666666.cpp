#include<bits/stdc++.h>
using namespace std;
set <int> a;
int n,m;
int main()
{
	cin>>m>>n;
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			a.insert(i*3+j*5);
		}
	}
	for(int i:a)
	{
		if(i!=0)
			cout<<i<<' ';
	}
	cout<<endl<<a.size()-1;


    return 0;
}

