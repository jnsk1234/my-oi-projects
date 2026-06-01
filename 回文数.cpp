#include<iostream>
#include<cmath>
using namespace std;
bool qe(int a)
{
	int m=sqrt(a);
	return m*m==a;
}
bool q(int b)
{
	int e=0;
	for(int i=b;i>0;i/=10){
		e=e*10+i%10;
	}
	return e==b;
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		
		if(qe(i)){
			//TODO
			cout<<"*";
		}
		cout<<i;
		if(q(i))
		{
			cout<<'@';
		}
		cout<<" ";
	}
	return 0;
}
