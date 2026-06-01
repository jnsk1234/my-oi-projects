#include<iostream>
#include<cmath> 
using namespace std;
bool zs(int n){
	bool j=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%2==0)
			j=0;
		return j;
	}
} 
int main()
{
	int n;
	cin>>n;
	if(n==1){	
		cout<<0;
	}
	else 
		cout<<zs(n)<<endl;
    return 0;
}

