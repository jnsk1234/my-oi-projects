#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[n][n];
	s[1][1]=0;
	for(int i=1;i<=n;i++)
	{
		s[1][i]=0;
		for(int j=1;j<=n-i;j++)
		{
			s[i][j]=s[i-1][j-1]+s[i-1][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("%8d",s[i][j]);
		}
		cout<<endl;
	}
	
    return 0;
}

