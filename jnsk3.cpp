#include<bits/stdc++.h>
using namespace std;
int s[105],n;
double m,h;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		h+=s[i];	
	}
	if(h>100)
	{
		h=h-100;
		h=h*0.9;
		h+=100;
	}
	
	printf("%.2f",h);
	
    return 0;
}

