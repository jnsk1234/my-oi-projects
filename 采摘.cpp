#include<bits/stdc++.h>
using namespace std;
int q[1000];
int main()
{
	int n;
	cin>>n;
	int max=0;
	int min=101;
	int zl=0;
	int sl=0;
	for(int i=1;i<=n;i++)
	{
		
		cin>>q[i];
		if(q[i]<min)
		{
			min=q[i];
		}
		if(q[i]>max)
		{
			max=q[i];
		}
		
		
	} 
	for(int i=1;i<=n;i++)
	{
		if(q[i]!=min && q[i]!=max)
		{
			zl+=q[i];
			sl++;
		}
		
		
		
	}
	cout<<zl<<endl;
	printf("%.1f",zl*1.0/sl);
	
	
    return 0;
}

