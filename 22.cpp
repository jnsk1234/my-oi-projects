#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s;
	cin>>s;
	while(s!=0)
	{
		int x=s%10;
		s/=10;
		cout<<x;
	}
    return 0;
}

