#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x,y;
	cin>>x;
	c=x/4;
	y=x%4;
	switch (y) {
		case 0:
			a=0;
			b=0;
			break;
		case 1:
			//TODO
			a=0;
			b=1;
			c-=1;
			break;
		case 2:
			//TODO
			a=1;
			b=0;
			c-=1;
			break;
		case 3:
			a=1;
			b=1;
			c-=2;
	cout<<"4Ôª±Ê"<<c<<"5Ôª±Ê"<<b<<"6Ôª±Ê"<<a<<endl;
	}
}
