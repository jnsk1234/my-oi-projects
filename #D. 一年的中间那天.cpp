#include<bits/stdc++.h>
using namespace std;
int m,d[105],cnt,a,flag,b;
int main() {
	cin>>m;
	for(int i=1; i<=m; i++) {
		cin>>d[i];
		cnt+=d[i];
	}
	cnt=(cnt+1)/2;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=d[i]; j++) {
			cnt--;
			if(cnt==0)
			{
				cout<<i<<' '<<j;
				return 0;
			}
		}
	}
	return 0;
}

