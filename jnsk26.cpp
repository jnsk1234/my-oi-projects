#include<bits/stdc++.h>
using namespace std;
int a,b;
bool pfs(int n)
{
	bool h=1;
	int s=n*n;
	int c[15]={0};
	if(s>1000000&&s<9999999)
	{
		while(s!=0)
		{
			int x=s%10;
			s/=10;
			c[x]++;
		}
		for(int i=0;i<=9;i++)
		{
			if(c[i]>=2){
				h=0;
				break;
			}
		}
	}
	else{
		h=0;
	}
	return h;
 } 
int main()
{
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(pfs(i)==1)
		{
			cout<<i<<endl;
		}
	}
    return 0;
}

