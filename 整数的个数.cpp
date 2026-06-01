#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	int n1=0,n5=0,n10=0;
	for(int i=0;i<k;i++)
	{
		int f;
		cin>>f;
		if(f==1)
		{
			n1++;
		}else if(f==5)
		{
			n5++;
		}else if(f==10)
		{
			n10++;
		}
		
	}
	cout<<n1<<endl;
	cout<<n5<<endl;
	cout<<n10<<endl;
	
	
	
    return 0;
}

