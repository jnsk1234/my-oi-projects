#include<bits/stdc++.h>
using namespace std;
int a,b,mx;
int main()
{
	cin>>a>>b;
	mx=max(mx,a%100+900-b);
	mx=max(mx,a-(b%100+100));
	mx=max(mx,a/100*100+90+a%10-b);
	mx=max(mx,a-(b/100*100+b%10));
	mx=max(mx,a/10*10+9-b);
	mx=max(mx,a-b/10*10);
	cout<<mx;
    return 0;
}

