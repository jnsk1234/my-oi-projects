#include<bits/stdc++.h>
using namespace std;
bool s[5005],n,m;
int main()
{
	cin>>n>>m;
	for(int i=2;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%i==0)
			{
				if(s[j]==0)
				{
					s[j]=1;
				}else{
					s[j]=0;
				}
			}
		}
	}
	
    return 0;
}

