#include<bits/stdc++.h>
using namespace std;
char a[1005];
int n;
int main()
{
	cin>>n;
	cin>>a;
	for(int i=0,j=n-1;i<=n,j>=0;j--,i++)
	{
		if(a[i]!=a[j])
		{
			cout<<"No"; 
			return 0;
		}
	}
 	cout<<"Yes"; 
    return 0;
}

