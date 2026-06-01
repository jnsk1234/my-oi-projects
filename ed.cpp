#include<bits/stdc++.h>
using namespace std;
struct a
{
	int g;
	char h;
};
bool cmp(a x,a y)
{
    return x.g<y.g; 
}
int main()
{
	int m,n;
	cin>>n>>m;
	char s[n][m];
	a zf[26];
	for(char i='a';i<='z';i++)
	{
		zf[i].h=i;
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cin>>s[i][j];
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
       		if(s[i][j]>='A'&&s[i][j]<='Z')
			{
           		s[i][j]=tolower(s[i][j]);
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			int h;
       		for(char z='a';z<='z';z++)
			{
       			if(s[i][j]==i)
       			{
       				zf[h].g;	
				}
			}
		}
	}
	sort(zf,zf+27,cmp);
	for(int i=0;i<5;i++)
	{
		cout<<zf[i].h<<zf[i].g;
	}	
    return 0;
}

