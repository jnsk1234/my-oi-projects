#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int n,m; 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	int x=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			x=0;
			if(a[i][j]=='?')
			{
				if(a[i-1][j]=='*')
				{
					x++;
				}	
				if(a[i+1][j]=='*')
				{
					x++;
				}
				if(a[i][j-1]=='*')
				{
					x++;
				}
				if(a[i][j+1]=='*')
				{
					x++;
				}
				if(a[i-1][j-1]=='*')
				{
					x++;
				}
				if(a[i-1][j+1]=='*')
				{
					x++;
				}
				if(a[i+1][j-1]=='*')
				{
					x++;
				}
				if(a[i+1][j+1]=='*')
				{
					x++;
				}
		
			char s=x+'0';
			a[i][j]=s;
			}

			
		}
	}

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	

	
    return 0;
}

