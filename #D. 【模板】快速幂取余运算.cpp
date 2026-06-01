#include<bits/stdc++.h>
using namespace std;
map<long long,long long> f;
long long a,b,p;
long long pow(long long x,long long y)
{
	if(y==1)
	{
		return x;
	}
	if(!f[y/2]) f[y/2]=pow(x,y/2)%p;
	if(!f[y-y/2]) f[y-y/2]=pow(x,y-y/2)%p;
	return f[y-y/2]*f[y/2]%p;
}
int main()
{
	cin>>a>>b>>p;
	long long s=pow(a,b);
	cout<<a<<'^'<<b<<' '<<"mod"<<' '<<p<<'='<<s%p;
    return 0;
}

