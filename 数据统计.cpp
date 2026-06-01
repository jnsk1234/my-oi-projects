#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	cin>>x;
	int s=x;
	int min=x;
	int max=x;
	for(int i=1;i<n;i++)
	{
		cin>>x;
		s+=x;
		if(x<min)
		{
			min=x;
		}
		if(x>max)
		{
			max=x;
		}
	}
	cout<<min<<" "<<max<<" "<<(double)s/n<<endl;
	
}
