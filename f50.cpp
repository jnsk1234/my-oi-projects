#include<bits/stdc++.h>

using namespace std;
int s[25]; 
int main()

{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n/2;i++)
	{
		if(s[i]!=s[n-i+1])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
    return 0;
}

