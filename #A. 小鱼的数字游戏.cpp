#include<bits/stdc++.h>
using namespace std;
stack<int> a;
int x;
int main()
{
	while(1)
	{
		cin>>x;
		if(x==0)
		{
			break;
		}
		else{
			a.push(x);
		}
	}
	while(a.size()!=0)
	{
		cout<<a.top()<<' ';
		a.pop();
	}

    return 0;
}

