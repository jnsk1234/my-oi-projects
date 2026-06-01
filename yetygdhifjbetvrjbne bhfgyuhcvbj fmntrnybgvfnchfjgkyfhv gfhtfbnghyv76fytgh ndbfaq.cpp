#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("我爱老师.txt","r",stdin);
	freopen("你好.txt","w",stdout);
	int d;
	char ch;
	cin>>d>>ch;
	for(int i=0;i<d;i++)
	{
		for(int j=0;j<=d-i;j++)
		{
			cout<<' ';
		}
		for(int j=0;j<=i;j++)
		{
			cout<<ch;
			cout<<' ';
			//if(j<i)
			//{
			//	cout<<' ';
			//}
		
		}
		cout<<endl;
	}
	fclose(stdin);
	fclose(stdout);
}
