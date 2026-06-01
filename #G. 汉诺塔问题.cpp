#include<bits/stdc++.h>
using namespace std;
void fun1(char x,char y,char z,int a)
{
	if(a==1)
	{
		cout<<x<<"->"<<a<<"->"<<y<<endl;
		return ;
	}
	fun1(x,z,y,a-1);
	cout<<x<<"->"<<a<<"->"<<y<<endl;
	fun1(z,y,x,a-1);
}
int main()
{
	char a,b,c;
	int n;
	cin>>n;
	cin>>a>>b>>c;
	//int sn=fun(n);
	fun1(a,b,c,n);
    return 0;
}

