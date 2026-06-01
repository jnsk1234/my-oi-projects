#include<bits/stdc++.h>
using namespace std;
const int N=50;
char ans[N];
int len(int n,int r,char s[]);

int main()
{
	int n,r;
	cin>>n>>r;
	int leng=len(n,r,ans);
	for(int i=leng-1;i>=0;i--)
	{
		cout<<ans[i];
	}
    return 0;
}
int len(int n,int r,char s[])
{
	int len=0;
	do{
		int yu=n%r;
		if(yu<10)
		{
			s[len]=yu+'0';
		}else{
			s[len]=yu-10+'A';
		}
		n/=r;
		len++;
	}while(n!=0);
	return len;
}

