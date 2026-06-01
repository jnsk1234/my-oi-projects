#include<bits/stdc++.h>
using namespace std;
int n,m;
double h,j;
int main()
{
	for(int i=1;i<=n;i++)
	{
		int f;
		if(f==0)
		{
			break;
		}
		h+=f;
		n++;
	}
	for(int i=1;i<=n;i++)
	{
		int f;
		if(f==0)
		{
			break;
		}
		j+=f;
		m++;
	}
	printf("%.1f",h/n);
	printf("%.1f",j/m);
    return 0;
}

