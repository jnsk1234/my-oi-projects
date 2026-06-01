#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
	cin>>T;
	while(T--)
	{
		int a[100005],t[100005],n=0,l=2e31-1,r=-1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>t[i];
		}
		for(int i=1;i<=n;i++){
			l=min(a[i]-t[i],l);
			r=max(a[i]+t[i],r);
		}
		double ans=(l+r)/2.0;
		if(floor(ans)==ans)
		{
			cout<<int(ans)<<endl;
		}
		else{
			cout<<ans<<endl;
		}
	}


    return 0;
}

