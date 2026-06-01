#include<iostream>
#include<algorithm>
#include<iostream>
#include<algorithm>
bool cmp(int a,int b)
{
	return a<b;
}
using namespace std;
int main()
{
	int a[6];
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	sort(a,a+6,cmp);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<' ';
	}
    return 0;
}

using namespace std;
int main()
{
	int a[6];
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	sort(a,a+6,cmp);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<' ';
	}
    return 0;
}

