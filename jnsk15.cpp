#include<bits/stdc++.h>
using namespace std;
int n,x,s[1005],a[1005];
int main()
{
	cin>>n;
	cin>>x;
	s[1]=x;
	a[x]++;
	for(int i=2;i<=n;i++)
	{
		s[i]=(s[i-1]*37+33031)%n+1;
		a[s[i]]++; 
	}
	int max=0;
	int t=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>max)
			max=a[i];
			t=i;
	}
	cout<<max<<' ';
	cout<<t;
    return 0;
}

