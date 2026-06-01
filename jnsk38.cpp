#include<bits/stdc++.h>
using namespace std;
int a,b;
int n(int a,int b)
{
	return max(a,b);
}
int main()
{
	cin>>a>>b;
	cout<<n(a,b);
    return 0;
}

