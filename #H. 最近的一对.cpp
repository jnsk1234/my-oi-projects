#include<bits/stdc++.h>
using namespace std;
int a[100005],n,f,cnt,mi=2e9-10;
map<int,int> m;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;i++){
			if(a[i]==a[j])
			{
				f=1;
				cnt=j-i;
				mi=min(cnt,mi);
				m[mi]=a[i];
	//			cout<<a[i]<<endl;
			}
		}
	}
	if(f==0)
	{
		cout<<"No";
	}else{
		cout<<m[mi];

	}
	
    return 0;
}

