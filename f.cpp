#include<iostream>
using namespace std;
const int M=100;
int b[M+1];
int main()
{

	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	
		cin>>x;
		b[x]++;
	}
	for(int i=0;i<=M;i++)
	{
		for(int j=1;j<=b[i];j++)
		{
			cout<<i<<" ";
		} 
	}
	cout<<endl;
    return 0;
}

