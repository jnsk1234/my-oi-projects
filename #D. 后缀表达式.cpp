#include<bits/stdc++.h>
using namespace std;
stack<int> a;
int l,r,x;//×óÓÒ 
string s;
int main()
{
	cin>>s; 
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		{
			string x;
			x+=s[i];
			while(isdigit(s[i+1]))
			{
				i++;
				x+=s[i];
				
			}
			a.push(stoi(x));
		}else{
			if(s[i]=='+')
			{
				r=a.top();
				a.pop();
				l=a.top();
				a.pop();
				a.push(l+r);
			}
			if(s[i]=='-')
			{
				r=a.top();
				a.pop();
				l=a.top();
				a.pop();
				a.push(l-r);
			}
			if(s[i]=='*')
			{
				r=a.top();
				a.pop();
				l=a.top();
				a.pop();
				a.push(l*r);
			}
			if(s[i]=='/')
			{
				r=a.top();
				a.pop();
				l=a.top();
				a.pop();
				a.push(l/r);
			}
		}
	}
	cout<<a.top(); 

    return 0;
}

