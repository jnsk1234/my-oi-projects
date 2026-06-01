#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
bool cmp(pair<char,int>a , pair<char,int>b) {
	return a.second<b.second;
}
string s;
int k;
int main() {
	cin>>s>>k;
	if(s.size()<k)
	{
		cout<<0;
		return 0;
	}
	for(auto i:s) {
		m[i]++;
	}
	vector<pair<char,int>>a(m.begin(),m.end());//按数量从小到大排序
	sort(a.begin(),a.end(),cmp);
	for(auto i:a)
	{
		if(k-i.second>=0)
		{
			m.erase(i.first);
			k-=i.second;
		}else{
			m[i.first]-=k;
			break; 
		}
	}
	cout<<m.size()<<endl;
	for(auto i:s)
	{
		if(m[i]>0)
		{
			cout<<i;
			m[i]--;
		}
	}
	return 0;
}

