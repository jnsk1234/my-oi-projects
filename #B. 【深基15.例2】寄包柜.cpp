#include<bits/stdc++.h>
using namespace std;
map<string,long long> m;
long long x,k,n,q;
string s1,s2,s3;
int main()
{
	cin>>n>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>x;
		if(x==1)
		{
			cin>>s1>>s2>>k;
			s3=s1+s2;
			m[s3]=k;
		}
		if(x==2)
		{
			cin>>s1>>s2;
			s3=s1+s2;
			cout<<m[s3]<<endl;
		}
	}


    return 0;
}

