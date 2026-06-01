#include<bits/stdc++.h>
using namespace std;
int ans;
string s1,s2,s3;
string fun(string x)
{
	int b=1;
	int res=0;
	
	for(int i=x.size()-1;i>=0;i--)
	{
		res=res+(x[i]-'0')*b;
		b=b*2;
	}
	ans=res;
	string s1;
	while(res){
		s1=s1+char(res%3+'0');
		res/=3;
	}
	return s1;
	
}
int main()
{
	cin>>s1>>s2;
	///s1l=s1.size();
	//s2l=s2.size();
	for(int i=0;i<s1[i];i++)
	{
		if(s1[i]==0)
		{
			s1[i]==1;
		}else{
			s1[i]==0;
		}
		s3=fun(s1);
		int cnt=0;
		for(int j=0;s2[j];j++)
		{
			if(s2[j]!=s3[j])
			{
				cnt++;
			}
		}
		if(ans==1)
		{
			cout<<ans;
			return 0;
		}
		if(s1[i]==0)
		{
			s1[i]==1;
		}else{
			s1[i]==0;
		}
	}
    return 0;
}

