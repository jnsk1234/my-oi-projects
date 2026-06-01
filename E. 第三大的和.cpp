#include<bits/stdc++.h>
using namespace std;
int a[105],s[5];
int x,cnt,js;
int main()
{
	for(int i=1;i<=5;i++)
	{
		cin>>s[i];
		a[s[i]]++;
	}
	sort(s,s+6);
	int n=s[5];
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			js++;
		}
		if(js==1||js==4||js==5)
		{
			cnt+=i;
		}
	}
	cout<<n<<' '<<cnt;
    return 0;
}

