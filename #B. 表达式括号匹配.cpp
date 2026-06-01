#include<bits/stdc++.h>
using namespace std;
stack <char> a;
char x;
int main()
{
	while(1)
	{
		cin>>x;
		if(x=='(')
		{
			a.push('(');
		}else if(x==')')
		{
			if(a.size()==0)
			{
				cout<<"NO";
				return 0;
			}
			else
			{
				a.pop();
			}
		}else if(x=='@')
		{
			break;
		}
	}
	if(a.size()!=0)
	{
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
	    return 0;
}

