#include<iostream>
using namespace std;
int a[45][45]={0};
int n,x,y;
void func(int xx,int yy,int val)
{
	a[xx][yy]=val;
	x=xx;
	y=yy;
}
void func_1()
{
	for(int i=2;i<=n*n;i++)
	{
		if(x==1&&y!=n)
			func(n,y+1,i);
		else if(x!=1&&y==n)
		{
			func(x-1,1,i);
		}
		else if(x==i&&y==n)
		{
			func(x+1,y,i); 
		}
		else if(x!=1&&y!=n)
		{
			if(a[x-1][y-1]==0)
				func(x-1,y+1,i);
			else
				func(x+1,y,i);
		}
	}
}
int main()
{
	cin>>n;
	a[1][(1+n)/2]=1;
	x=1,y=(1+n)/2;
	func_1();
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<endl;
		}
		cout<<endl;
	}
    return 0;
}

