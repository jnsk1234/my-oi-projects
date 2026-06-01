#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n*2+1;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	for(int i=1;i<=2*n-1;i++)
	{
		cout<<' ';
		for(int j=1;j<+2*n-1;j++)
		{
			if(i==j||j==(2*n-i))
			{
				cout<<'*';
			}else{
				cout<<' ';
			}
		}
		cout<<endl;
	}
	for(int i=1;i<=n*2-1;i++)
	{
		cout<<"*";
	}
    return 0;
}

