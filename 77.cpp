#include<bits/stdc++.h>
using namespace std;
int main()
{	

	int a=1234;
	
	while(a!=0)
	{
		int s=a%10;
		cout<<s<<' ';
		a/=10;
	}
    return 0;
}

