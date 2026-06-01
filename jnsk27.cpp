#include<bits/stdc++.h>
using namespace std;
int n,k,id;
int a[1005],b[1005];
void zx()
{
	int l=1;
	for(int i=1,j=n/2+1;i<=n/2;i++,j++)
	{
		b[l++]=a[i];
		
		b[l++]=a[j];
	}
	swap(a,b);
}
int main()
{
	cin>>n>>k>>id;
	for(int i=1;i<=n;i++)
		a[i]=i;
	for(int i=1;i<=k;i++)
		zx();
	cout<<a[id];
    return 0;
}

