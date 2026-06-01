#include<iostream>
using namespace std;
int main()
{
	int min,big,sj,gs,m=0;
	cin>>min>>big>>sj>>gs;
	for(int i=min;i<=big;i++)
	{
		if(i%sj==0)
			m++;
		if(m==gs)
		{
			cout<<i;
			break;
		}
		
	}
	if(m>gs)
	{
		cout<<'0';
	}
} 
