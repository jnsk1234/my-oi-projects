#include<iostream>
using namespace std;
bool cheak(int,int); 
int main()
{
	int n,d;
	cin>>n>>d;
	cout<<cheak(n,d);
    return 0;
}
bool cheak(int n,int d)
{
	bool found=0;
	while(n)
	{
		int e=n%10;
		if(e==d)
		{
			found=1;
			break;
		}
		n=n/10;
	}
	return found;
}
