#include<iostream>
using namespace std;
int a[100005],b[100005];
int n;
void kkp(int l,int r) {
	int i=l,mid=(l+r)/2,j=mid+1,k=l;
	if(l==r)
	{
		return ;
	}
	kkp(i,mid);
	kkp(j,r);
	while(i<=mid&&j<=r)
	{
		if(a[i]<a[j])
		{
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		b[k++]=a[i++];
	}
	while(j<=r)
	{
		b[k++]=a[j++];
	}
	for(int p=l;p<=r;p++)
	{
		a[p]=b[p];
	}
}
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	kkp(1,n);
	for(int i=1; i<=n; i++) {
		cout<<a[i]<<' ';
	}
	return 0;
}
