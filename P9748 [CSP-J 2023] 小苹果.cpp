#include<bits/stdc++.h>
using namespace std;
int n;
int ans1,ans2;
int main()
{
	cin>>n;
	for(int i=1;;i++)
	{
		if(n==0)
		{
			break;
		}
		if(n%3==1&&ans2==0)
		{
			ans2=i;
		}
		n-=ceil(n/3.0);
		++ans1;
		
	}
	cout<<ans1<<' '<<ans2;

    return 0;
}

