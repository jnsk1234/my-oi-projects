#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,f=0;
	cin>>n>>m;
	for(int i=1;;i++)
	{
		int d=n/m;
		n=n-(d*m);
		f+=d;
		n+=d;
		if(n<m)
		{
			break;
		 } 
	}
	cout<<f;
    return 0;
}

