#include<iostream>
using namespace std;
int jc(int n)
{
 	int p=1;
 	for(int i=1;i<=n;i++)
 	{
 		p=p*i;
	 }
	 return p;
}
int main()
{
	int m,n;
	cin>>m>>n;
	int zhs,c;
	c=m-n;
	zhs=jc(m)/(jc(c)*jc(n));
	cout<<zhs;
}
