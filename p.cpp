#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	int rank;
	int index;
};
Node a[10000];
bool cmp1(Node x,Node y)
{
	return x.data<y.data;
}
bool cmp2(Node x,Node y)
{
	return x.index<y.index;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].data;
		a[i].index=i;
	}
	sort(a,a+n,cmp1);
	for(int i=0;i<n;i++)
	{
		a[i].rank=i+1;
	}
	sort(a,a+n,cmp2);
	for(int i=0;i<n;i++)
	{
		cout<<a[i].rank<<' ';
	}
    return 0;
}

