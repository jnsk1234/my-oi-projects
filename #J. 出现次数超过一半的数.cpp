#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int n,x,flag;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		m[x]++;
	 } 
	for(int i=-50;i<=50;i++)
	{
		if(m[i]>n/2)
		{
			cout<<i;
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"no";
	}
    return 0;
}

