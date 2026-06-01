#include<bits/stdc++.h>
using namespace std;
long long f[55];
long long fun(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x==2)
	{
		return 2;
	}
	if(x==3)
	{
		return 4;
	}
	if(f[x]==0)
	{
		f[x]=fun(x-1)+fun(x-2)+fun(x-3);
	}
	return f[x]; 
}
int main()
{
	int a;
	while(1==1){
		cin>>a;
		if(a==0)
		{
			break;
		}
		cout<<fun(a)<<endl;
	}
    return 0;
}
