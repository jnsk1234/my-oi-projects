#include<bits/stdc++.h>
using namespace std;
set <int> a;
int n,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		a.insert(x);
	}
	cout<<a.size()<<endl;
	for(int i:a)
	{
		cout<<i;
	}

    return 0;
}

