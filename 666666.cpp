#include<bits/stdc++.h>
using namespace std;
char a[1005];
bool sc=1;
int main()
{
	cin>>a;
	int l=strlen(a);
	
	for(int i=0,j=l-1;i<=l,j>=0;i++,j--)
	{
		if(a[i]!=a[j])
		{
			sc=0;
		}
	}
	if(sc!=0)
	{
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
    return 0;
}

