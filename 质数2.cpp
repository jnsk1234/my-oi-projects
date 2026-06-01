#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=0;
	cin>>n;
	int d=sqrt(n)+1;
	for(int i=2;i<d;i++)
	{
		if(n%i==0)
		{
			a++;
		}
	}
	if(n==2)
	{
		cout<<"YES";
	}else{
		if(a==0)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		} 
	}
	
    return 0;
}

