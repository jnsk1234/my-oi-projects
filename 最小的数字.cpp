#include<bits/stdc++.h>
int s[3],ans,y,x,n,m,c[15];
using namespace std;
int main() {
	cin>>n>>m;
	if(m==0&&n>1) {
		cout<<0;
		return 0;
	}
	for(int i=1; i<=m; i++) {
		cin>>x>>y;
		if(x==1&&y==0&&n>1){
			cout<<-1;
			return 0;
		}
		if(s[x]!=0&&s[x]!=y) {
			cout<<-1;
			return 0;
		} else {
			s[x]=y;
		}
	}
	if(n>1&&s[1]==0)
	{
		ans=1;
	}else{
		ans=s[1]; 
	}
	for(int i=1; i<=n; i++) {
		ans=ans*10+s[i];
	}
	
	cout<<ans;
	return 0;
}

