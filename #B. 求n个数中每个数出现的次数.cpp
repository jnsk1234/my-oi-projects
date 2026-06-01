#include<bits/stdc++.h>

using namespace std;
map<int,int> m;
int n,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		m[x]++;
	}
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
    return 0;
}

