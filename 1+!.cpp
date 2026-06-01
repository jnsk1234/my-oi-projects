#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,sum=1;
	cin>>n;
	for(int i=0;i<5;i++)
	{
		sum+=sum*(n%3);
	}
	sum%=3;
	cout<<sum;
    return 0;
}

