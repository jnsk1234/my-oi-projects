#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
int b;
int _1,c,_2;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	int sun=0;
	for(int i=1;i<=n;i++)
	{
		sun=0;
		for(int j=1;j<=n;j++)
		{
			sun+=a[i][j];
		}
		if(sun%2==0)
		{
			
		}else if(_1==0){
			b=i;
			_1++;
		}else if(_1!=0)
		{
			cout<<"Corrupt";
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		sun=0;
		for(int j=1;j<=n;j++)
		{
			sun+=a[j][i];
		}
		if(sun%2==0)
		{
			
		}else if(_2==0){
			c=i;
			_2++;
		}else if(_2!=0)
		{
			cout<<"Corrupt";
			return 0;
		}
	}
	if(_1==0&&_2==0)
	{
		cout<<"OK";
		return 0;
	}
	else{
		cout<<b<<' '<<c;
	}
    return 0;
}

