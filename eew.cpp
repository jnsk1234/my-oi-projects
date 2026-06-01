#include<iostream>
using namespace std;
struct AA{
	char name[10];
	int high;
};
AA a[20];

int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].high;
	}
	cin>>m;
	for(int i=0;i<n;i++)
	{
		if(a[i].high>m)
		{
			cout<<a[i].name;
		}
	}
	return 0;
 } 
