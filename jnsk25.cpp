#include<bits/stdc++.h>
using namespace std;
int n,cnt=1,mx=1,x;
bool a[1000005];
bool zs(int s)
{
	bool sf=1;//是不是质数
	int p=sqrt(s)+1; 
	for(int i=2;i<=p;i++)
	{
		if(s%i==0)
		{
			sf=0;
			break;
		}
	}
	return sf;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i]=zs(i);
	}
	for(int i=1;i<n;i++)
	{
		while(i<n&&a[i+1]==0&&a[i]==0)
		{
			cnt++;
			i++;
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

