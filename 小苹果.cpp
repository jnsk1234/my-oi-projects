#include<bits/stdc++.h>
using namespace std;
int n;
int ans1,ans2;
int main()
{
	cin>>n;
	while(n)
	{
		ans1++;
		if(n%3==1&&ans2==0)
		{
			ans2=ans1;
		}
		n-=ceil(n/3.0);
	}
	cout<<ans1<<' '<<ans2;

    return 0;
}
