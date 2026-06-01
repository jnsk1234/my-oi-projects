#include<bits/stdc++.h>
using namespace std;

int n;
string s;
set <string> a;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		a.insert(s);
	}
	cout<<52-a.size();


    return 0;
}

