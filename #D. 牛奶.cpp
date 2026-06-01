#include<bits/stdc++.h>
using namespace std;
set<int> s;
int x,y,z;
bool f[25][25][25];
void dfs(int a,int b,int c)
{
	if(f[a][b][c]==1)
	{
		return ;
	}
	if(a==0)
	{
		s.insert(c);
	}
	f[a][b][c]=1;
	//
	if(a<y-b) {
		dfs(0,a+b,c);
	} else {
		dfs(a-(y-b),y,c);
	}
	if(a<z-c) {
		dfs(0,b,a+c);
	} else {
		dfs(a-(z-c),b,z);
	}
	//
	if(b<x-a) {
		dfs(a+b,0,c);
	} else {
		dfs(x,b-(x-a),c);
	}
	if(b<z-c) {
		dfs(a,0,c+b);
	} else {
		dfs(a,b-(z-c),z);
	}
	//
	if(c<x-a) {
		dfs(a+c,b,0);
	} else {
		dfs(x,b,c-(x-a));
	}
	if(c<y-b) {
		dfs(a,b+c,0);
	} else {
		dfs(a,y,c-(y-b));
	}
	f[a][b][c]=0;
}
int main()
{
	cin>>x>>y>>z;
	dfs(0,0,z);
	for(auto i:s)
	{
		cout<<i<<' ';
	}
    return 0;
}

