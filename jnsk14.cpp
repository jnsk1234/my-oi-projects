#include<bits/stdc++.h>
using namespace std;
int n;
bool zs(int s)
{
	bool sf=1;//是不是质数
	int p=sqrt(s)+1; 
	for(int i=2;i<=p;i++)
	{
		if(s%i==0)
		{
			sf=0;
			break;
		}
	}
	
	return sf;
}
int main()
{
	cin>>n;
	cout<<2<<endl;
	for(int i=3;i<=n;i++)
	{
		if(zs(i)==1)
		{
			cout<<i<<endl;
		}
	}
    return 0;
}

