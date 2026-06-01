#include<bits/stdc++.h>
using namespace std;
set <string> a;
int n; 
string x;
int main()
{
	cin>>n;
	while(n)
	{
		cin>>x;
		a.insert(x);
		n--;
	}
	cout<<52-a.size();

    return 0;
}

