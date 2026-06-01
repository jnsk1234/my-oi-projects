#include<bits/stdc++.h>
using namespace std;
long long k;
long long b,a;
int main()
{
	cin>>b>>a;
	k=b*pow(2,a+2);
	k/=25;
	k+=1;
	k*=100;
	k%=998344353;
	cout<<k; 
    return 0;
}

