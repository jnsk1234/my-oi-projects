#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n=0;
	cin>>s;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++)
	{
		n=n+(s[i]-'0'*pow(2,i));
	}
	cout<<n;
    return 0;
}

