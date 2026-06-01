#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[8][8];
	a[0][0]=1;
	for(int i=1;i<n;i++)
	{
		a[i][i]=1;
		a[i][0]=1;
		for(int j=1;j<=i-1;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			cout<<"    ";
		}
		for(int j=0;j<=i;j++)
		{
			cout<<setw(4)<<a[i][j]<<'    ';
		}
		cout<<endl;
		
	}
	 
} 
