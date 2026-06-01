#include<bits/stdc++.h>
using namespace std;
vector <int> a[1005];
int n,cnt,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		bool flag=1;
		for(int j=1;j<=cnt;j++)
		{
			if(a[j].back()>=x)
			{
				a[j].push_back(x);
				flag=0;
				break;
			}	
		}
		if(flag==1)
		{
			cnt++;
			a[cnt].push_back(x);
		}
	}
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++)
	{
		cout<<i<<":";
		for(int j:a[i]){
			cout<<j<<' ';
		}
		cout<<endl;
	}
	
	
    return 0;
}

