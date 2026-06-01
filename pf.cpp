#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=0,h=0,min=1000;
	for(int i=0;i<n;i++)
	{
		int g;
		cin>>g;
		h+=g;
		if(min>g)
		{
			min=g;
		}
		if(max<g)
		{
			max=g;
		}
	 } 
	 h=h-max;
	h=h-min;
	double zs=h/(n-2);
	cout<<zs<<".00";
    return 0;
}

