#include<iostream>
using namespace std;
int main()
{
	int a[10][10];
	int b[10][10];
	int n,m;
	cin>>n>>m; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i+1;
				b[k][1]=j+1;
				b[k][2]=a[i][j];for(int i=0;i<n;i++)
	{
				k++;
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<b[i][j]<<' ';
		}
		cout<<endl;
	}
}
