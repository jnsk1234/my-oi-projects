#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,n,b;
	cin>>a>>b>>n;
	
	if(n*b>a)
	{
		long long h=a/b;
		cout<<h*b;
	}else{
		cout<<n*b;
	}
	
	
    return 0;
}

