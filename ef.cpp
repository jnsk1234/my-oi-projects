#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y,n;
	cin>>n>>y;
	if(y==1)
	{
		cout<<31;
	}
	else if(y==2)
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
				cout<<29;
			}else{
				cout<<28;
			}
		}
		else{
			if(n%4==0)
			{
				cout<<29;
			}else{
				cout<<28;
			}
		}
	}
	else if(y==3)
	{
		cout<<31;
	}
	else if(y==4)
	{
		cout<<30;
	}
	else if(y==5)
	{
		cout<<31;
	}
	else if(y==6)
	{
		cout<<30;
	}
	else if(y==7)
	{
		cout<<31;
	}
	else if(y==8)
	{
		cout<<31;
	}
	else if(y==9)
	{
		cout<<30;
	}
	else if(y==10)
	{
		cout<<31;
	}
	else if(y==11)
	{
		cout<<3;
	}
	else if(y==12)
	{
		cout<<31;
	}
    return 0;
}

