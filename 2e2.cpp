#include<iostream>
using namespace std;
int main(){
	int a[10][10];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<a[j][i]<<' ';
		}
		cout<<endl;
	}
	
}
