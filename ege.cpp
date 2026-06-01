#include<bits/stdc++.h> 
using namespace std;
long long s=1;
long long n,m,k,x; 
int q(int a,int b)
{
	int s=1;
	while(b)
	{
		if(b&1==1) 
			s=(s*a)%n;	
		a=(a*a)%n;
		b>>=1;
	}
	s%=n;
	return s;
}
int main()
{
	cin>>n>>m>>k>>x;
	 printf("%d",(x%n+m*q(10,k))%n);
}

