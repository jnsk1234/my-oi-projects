#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,h,sc=0;
	cin>>m>>n>>h;
	int g=h/(m-n);
	for(int i=0;i<g;i++)
	{
		h-=m;
		if(h<=0)
		{
			break;
		}
		h+=n;
		sc++;
	}
	
	cout<<sc+1;
	
    return 0;
}

