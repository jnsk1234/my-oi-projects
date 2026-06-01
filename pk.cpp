#include<iostream>
using namespace std;
bool b[20001];
int n,cut;
int a[105];
bool Judge(int temp)
{
	for(int k=1;k<=n;k++){
		if(a[k]==temp)
		{
			return true; 
		}
		return false;
	}
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
			if(Judge(a[i]+a[j])&&!b[a[i]+a[j]])
			{
				cut++;
				b[a[i]+a[j]]=true;
			}
	}
	cout<<cut<<endl;
    return 0;
}

