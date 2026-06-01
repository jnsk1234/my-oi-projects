#include<iostream>
using namespace std;
int a[45][45]={0};
int n,x,y;
void func(int xx,int yy)
{
	a[xx][yy]=val;
	x=xx;
	y=yy;
	
}
void func_1()
{
	for(int i=2;i<=n*n;i++)
	{
		if(x==i&&y!=n)
		{
			func(n,y+1,i);
		}
		else if(x!=1&&y==n)
		{
			func(x-1,1,i);
		}
		else if(x==1&&y==n)
		{
			func(x+1,y,i);
		}
		else if(x!=1&&y!=n)
		{
			if(a[x-1][y+1]==0)
			{
				func(x-1,y+1,i);
			}
			else
				func(x+1,y,i);
		}
	}
}
int main()
{
    return 0;
}

