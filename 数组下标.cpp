#include<bits/stdc++.h>
using namespace std;
struct sz
{
	int dp;
	int f;
	
	
};
bool cmp(sz x,sz y)//用来从大到小 ，不加则从小到大 
{
	return x.dp>y.dp;
}
int main()
{
	int n;
	cin>>n;
	sz d[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>d[i].dp;	 
	}
	sort(c+0,c+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<d[i].f;
	}
    return 0;
}

