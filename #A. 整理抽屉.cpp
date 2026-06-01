#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
bool cmp(pair<string,int> a,pair<string,int> b)
{
	if(a.second!=b.second) return a.second>b.second;
	return a.first>b.first;
}
string s;
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		m[s]++;
	}
	vector<pair<string,int>> a(m.begin(),m.end());
	sort(a.begin(),a.end(),cmp);
	cout<<a[0].first;
    return 0;
}

