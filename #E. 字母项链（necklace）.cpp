#include<bits/stdc++.h>
using namespace std;
string a;
long long maxi=-1;
long long sum,s;
int main()
{
	cin>>a;
	long long l=a.size();
	for(int i=0;i<l;i++)
	{
		sum+=a[i]-'A'+1;
		s+=(a[i]-'A'+1)*(i+1);
	}
	for(int i=0;i<l;i++)
	{
		//a=a.back()+a;
		//a.pop_back()
		//s=s+sum-(a.back()-'A+1')*l;
		s=s+sum-((a[l-i-1]-'A'+1)*l);
		
		if(s>maxi)
		{
			maxi=s;
		}
	}
	cout<<maxi;
    return 0;
}

