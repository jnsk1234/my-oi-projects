#include<bits/stdc++.h>
using namespace std;
long long n;
long long sum;
long long h;
long long x;
long long k;
map<int,int> f;
long long kkp(long long x,long long y)
{
	if(y==1)
	{
		return x;
	}
	if(!f[y/2])
	{
		f[y/2]=pow(x,y/2);
	}
	if(!f[y-y/2])
	{
		f[y-y/2]=pow(x,y-y/2);
	}
	return f[y/2]*f[y-y/2];
}
int main()
{
	while(cin>>x){
		k++;
		sum+=x;
	}
	cout<<sum*kkp(2,k-1);
    return 0;
}

