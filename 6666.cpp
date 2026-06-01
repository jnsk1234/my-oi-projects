#include<bits/stdc++.h>
priority_queue<int ,vector<int>,greater<int>> pa;
priority_queue<int> pat;
int a,n,ans,b;
using namespace std;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		pa.push(a);
	}
	while(pa.size>1)
	{
		a=pa.top();
		pa.pop();
		b=pa.top();
		pa.pop();
		ans=a+b;
		pa.push(<a+b);
	}
	cout<<ans;
    return 0;
}

