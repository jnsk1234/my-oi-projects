#include<bits/stdc++.h>
using namespace std;
int a[200];
int init(int a[])
{
	string s;
	cin>>s;
	a[0]=s.length();
	for(int i=0;i<a[i];i++)
	{
		a[i+1]=s[a[0]-i-1]-'0'; 
	}
	return a[0];
 } 
int main()
{
	int d=init();
	for(int i=0;i<d;i++)
	{
		cout<<a[i];
	}
	
    return 0;
}

