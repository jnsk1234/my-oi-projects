#include<iostream>
using namespace std;
int main()
{
	int s;
	int q[20][20];
	cin>>s;
	for(int i=1;i<=s;i++)
	{
		q[1][i]=i;
	}
	for(int i=1;i<=s;i++)
	{
		printf("%-8d",q[i]);;
	 } 
	
    return 0;
}

