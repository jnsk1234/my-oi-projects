#include<iostream>
using namespace std;
int main()
{	
	int m,n;
	cin>>m>>n;
	int s[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;i++)
		{
			cin>>s[i][j];
		}
	}
	int x=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			x+=s[i][j];
			cout<<x;
		}
	}
    return 0;
}

