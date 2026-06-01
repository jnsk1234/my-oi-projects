#include<bits/stdc++.h>
using namespace std;
double n1;
long long a,b; 
int main()
{
	cin>>a>>b;
	n1=pow(a,b);
	if(n1<=1e9)
	{
		cout<<int(n1);
	}else{
		cout<<-1;
	}
//	cout<<n;
    return 0;
}

