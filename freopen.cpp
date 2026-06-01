#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("in.txt","r",stdout);
	freopen("out.txt","w",stdout);
	int sum=0;
	int temp;
	while(cin>>temp)
	{
		sum+=temp;
	}
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
