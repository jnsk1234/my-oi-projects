#include<bits/stdc++.h>
using namespace std;
queue<int> a;
int n,m,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a.push(i);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=2;j++)
		{
			if(j<2)
			{
				cout<<a.front()<<" ";
				a.pop();
			}else{
				x=a.front();
				a.pop();
				a.push(x);
			}
		}
	}
    return 0;
}
