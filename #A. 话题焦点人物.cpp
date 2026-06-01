#include<bits/stdc++.h>
using namespace std;
int N,maxi,q;
map<int,vector<int >> c;
int main()
{
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		int x,k;
		cin>>x>>k;
		for(int j=1;j<=k;j++)
		{
			cin>>q;
			c[q].push_back(x);
		}
	}
	maxi=0;
	int id=0;
	for(auto i:c){
		if(maxi<i.second.size()){
			maxi=i.second.size();
			id=i.first;
		}
	}
	cout<<id<<endl;
	set<int> s(c[id].begin(),c[id].end());
	for(auto i:s){
		cout<<i<<" ";
	} 
    return 0;
}
