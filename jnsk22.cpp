#include<bits/stdc++.h>
using namespace std;
int n,a[10005],cnt=1,mx=0;
int main()
{
	cin>>n;;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		while(i<n&&a[i+1]>a[i])
		{
			cnt++;
			i++;
		}
		if(cnt!=1)
		{
			if(cnt>mx)
			{
				mx=cnt;
			}
		}
		cnt=1;
	}
	cout<<mx;
    return 0;
}



