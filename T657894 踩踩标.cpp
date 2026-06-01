#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
long long ans,cnt;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cnt=sqrt(n);
		ans=k*n;
        for(long long a=1;a<=cnt;a++)
        {
            long long b=n/a;
            ans=min(ans,a+b+(k*(n-a*b)));
        }
		if(k==0)
		{
			cout<<0<<endl;
		}else{
			cout<<ans<<endl;
		}
	}
	
	
	return 0;
}