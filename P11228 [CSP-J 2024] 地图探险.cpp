#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105],k,n,m,x,y,d,T,x1,ans=1;
int y2;
char s;
int main()
{
	cin>>T;
	while(T--){
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		ans=1;
		cin>>n>>m>>k;
		cin>>x>>y>>d;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>s;
				if(s=='.')
				{
					a[i][j]=1;
				}else{
					a[i][j]=0;
				}
			}
		}
		y2=y;
		x1=x;
		for(int i=1;i<=k;i++)
		{
			if(d==0){
				y2=y+1;
			}else if(d==1){
				x1=x+1;
			}else if(d==2){
				y2=y-1;
			}else if(d==3)
			{
				x1=x-1;
			}
			if((1<=x1)&&(x1<=n)&&(1<=y2)&&(y2<=m)&&(a[x1][y2]==1))
			{
				if(b[x1][y2]!=1)
				{
					ans++;
				}
				x=x1;
				y=y2;
				b[x1][y2]=1;
			}else{
				d=(d+1)%4;
				y2=y;
				x1=x;
			}
		}
		cout<<ans<<endl;
	}


    return 0;
}
/*
2
1 5 4
1 1 2
....x
5 5 20
1 1 0
.....
.xxx.
.x.x.
..xx.
x....*/
