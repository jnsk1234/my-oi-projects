#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int n,m,x;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a.push(i);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j<m)
			{
				x=a.front();
				a.pop();
				a.push(x);
				
			}else{
				cout<<a.front()<<" ";
				a.pop();
			}
		}
	}
    return 0;
}

