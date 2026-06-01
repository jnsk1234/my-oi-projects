#include<iostream>
using namespace std;
int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	int now;
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		now=31;
		
	}
	else if(m==4||m==6||m==9||m==11)
	{
		now=30;
	}
	else{
		if(y%100!=0&&y%4==0||y%400==0)
		{
			now=29;
		}
		else{
			now=28;
		}
	}	
	d+=1;
	if(d>now){
		d=1;
		m=m+1;
	}
	if(m>12)
	{
		m=1;
		y=y+1;
	}
	cout<<y<<" "<<m<<" "<<d<<endl;
	return 0;
}
