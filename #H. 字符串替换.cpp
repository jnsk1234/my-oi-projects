#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
map<char,int> m2;
char x;
string s1,s2;
int cnt=0,n;
int main()
{
	cin>>n;
	cin>>s1>>s2;
	for(int i=0;i<n;i++)
	{
		m[s1[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		m2[s2[i]]++;
	}
	cnt=0;
	for(char i='a';i<='z';i++)
	{
		if(m[i]!=m2[i])
		{
			cnt+=abs(m[i] - m2[i]);
		}
	}

	for(char i='0';i<='9';i++)
	{
		if(m[i]!=m2[i])
		{
			cnt+=abs(m[i] - m2[i]);
		}
	
	}
	for(char i='A';i<='Z';i++)
	{
		if(m[i]!=m2[i])
		{
			cnt+=abs(m[i] - m2[i]);
		}
	}
	
	cout<<cnt/2;
    return 0;
}

