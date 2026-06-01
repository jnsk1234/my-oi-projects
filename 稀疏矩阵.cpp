#include<iostream>
using namespace std;
const int M=5;
const int N=5;
const int K=10;
int a[M][N];
int b[K][3];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int k=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i+1;
				b[k][1]=j+1;
				b[k][2]=a[i][j];
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
