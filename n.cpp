#include<iostream>
using namespace std;
int n,cut;
int a[105];
bool b[20001];
bool judge(int zemp);
{
	for(int k=1;k<=n;k++)
	{
		for(int k=1;k<=n;k++)
		{
			if(a[k]==temp)
				return true;
			
		}
	}
	return false;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(judeg(a[i]+j[i])&&!b[a[i]+a[j]])
			{
				cnt++;
				b[a[i]+a[j]]=true;
			}
		}
	}
	cout<<cut<<endl;
    return 0;
}

