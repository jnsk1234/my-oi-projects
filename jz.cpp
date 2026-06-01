#include<iostream>
using namespace std;
const int M=10;
const int N=10;
int a[M][N];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0;m<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j=n;j++){
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
		
	}
	return 0;
}
