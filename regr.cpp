#include<bits/stdc++.h>
using namespace std;
int t,r[100005],c[100005],n;
int sum=1;
stack<int>q;//ջq 
int main()
{
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			cin>>r[j];
		}
		for(int j=1;j<=n;j++)
		{
			cin>>c[j];
		}
		for(int j=1;j<=n;j++)
		{
			q.push(r[i]);
			while((q.top())==c[sum])
			{
				q.pop(),sum++;
				if(q.empty())break;
			}
		}
		if(q.empty()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		while(!q.empty())q.pop();
	}
    return 0;
}

