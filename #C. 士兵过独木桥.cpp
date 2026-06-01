//x,x+l-1 
#include<bits/stdc++.h>
using namespace std;
int l,x,n,grzk,grzm,zm,zk;
int main()
{
	cin>>l;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		grzk=min(x,l-x+1);//1 
		grzm=max(x,l-x+1);//4
		zk=max(zk,grzk);//1
		zm=max(zm,grzm);//4
	}
	cout<<zk<<' '<<zm;

    return 0;
    
}
// 1234
// 1 3
