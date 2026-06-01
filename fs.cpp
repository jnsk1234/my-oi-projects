#include<bits/stdc++.h>
using namespace std;
int A[201],B[202],C[203];
string s1,s2;
int init(int a[],string &s)
{
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		a[i]=s[len-1-i]-'0';
	}
	return len;
}
int main()
{
	int lena=init(A,s1);
	int lenb=init(B,s2);
	int lenc=max(lena,lenb);
	int x=0;
	for(int i=0;i<lenc;i++)
	{
		C[i]=A[i]+B[i]+x;
		x=C[i]/10;
		C[i]%=10;
	}
	C[lenc]=x;
	while(C[lenc]==0&&lenc>0)
	{
		lenc--;
	}
	for(int i=lenc;i>=0;i--)
	{
		cout<<C[i]; 
	}
    return 0;
}

