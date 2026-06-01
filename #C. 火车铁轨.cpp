#include<bits/stdc++.h>
using namespace std;
stack <int>a;
int x;
int n,len=1,m[1005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	for(int i=1;i<=n;i++)
	{
		a.push(i);
		while(!a.empty()&&m[len]==a.top())
		{
			len++;
			a.pop();
		}
	}
	
	if(len>n)
	{
		cout<<"Yes";
	}else{
		cout<<"No";
	}

    return 0;
}

