#include<bits/stdc++.h>
using namespace std;
string a;
int ans;
int main()
{
	cin>>a;
	for(int i=0;i<8;i++)
	{
		if(a[i]=='1')
		{
			ans++;
		}
	}
	cout<<ans;
    return 0;
}

