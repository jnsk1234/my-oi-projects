#include<bits/stdc++.h>
using namespace std;
int start,N;
int val[1001];
int nxt[1001];
int add1,val1,nxt1,sum=0; 
int main()
{
	cin>>start>>N;
	for(int i=0;i<N;i++)
	{
		cin>>add1>>val1>>nxt1;
		val[add1]=val1;
		nxt[add1]=nxt1;
	}
	while(val[start]==0)
	{
		start=nxt[start];
		N--;
	}
	while(start!=-1)
	{
		if(val[start]==1)
			sum+=pow(2,--N)*val[start];
		else
			N--;
		start=nxt[start];
	}
	cout<<sum;
    return 0;
}

