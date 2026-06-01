#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,h=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(i%4==0)
		{
			cout<<i;
			h++;
		}
		
	}
	if(h==0)
	{
		cout<<-1;
	}
	
    return 0;
}

