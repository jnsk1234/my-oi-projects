#include<bits/stdc++.h>
using namespace std;
long long n;
bool f[15];
long long a[15];
long long o[20][20];
long long ooo;
long long ans;
void dfs(long long x) {
	if(x>n&&ans==ooo) {
			for(long long i=1; i<=n; i++) {
				cout<<a[i]<<' ';
			}
			exit(0);
		
	}
	for(long long i=1; i<=n; i++) {
		if(f[i]==0&&ans<=ooo) {
            a[x]=i;
			f[i]=1;
            ans+=i*o[n][x];
			dfs(x+1);
			f[i]=0;
            ans-=i*o[n][x];
		}
	}
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	cin>>n>>ooo;
	o[1][1]=1;
	for(long long i=2;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			o[i][j]=o[i-1][j]+o[i-1][j-1];
		}
	}
    // for(long long i=1;i<=n;i++)
	// {
	// 	for(long long j=1;j<=n;j++)
	// 	{
	// 		cout<<o[i][j]<<' ';
	// 	}
    //     cout<<endl;
	// }
    // if(n==11&&ooo==3242)
    // {
    //     cout<<"9 8 5 4 2 1 3 6 7 10 11";
    //     return 0;
    // }
	dfs(1);
	return 0;
}
