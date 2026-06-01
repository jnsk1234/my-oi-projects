#include<bits/stdc++.h>
using namespace std;
int n,r,l;
int main()
{
	cin>>n>>l>>r;
	if(l/n==r/n)
	{
		cout<<r%n;
	}else{
		cout<<n-1;
	}

    return 0;
}

