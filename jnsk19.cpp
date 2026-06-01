#include<bits/stdc++.h>
using namespace std;
int n,cnt=1,a[105],mx=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		while(i<n&&a[i+1]%2==0)
		{
			cnt++;
			i++;
		}
		if(cnt>0)
		{	
			if(mx<cnt)
			{
				mx=cnt;
			}
			cnt=1;
		}
	}
	cout<<mx-1;
    return 0;
}


