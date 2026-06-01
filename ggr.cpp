#include<bits/stdc++.h>
using namespace std;
int a[5],b[5];
int a_,b_;
int main()
{
	cin>>a_>>b_;
	int i=1;
	int a_2=a_,b_2=b_;
	while(a_)
	{
		a[i]=a_%10;
		a_/=10;
		i++;
	}
	i=1;
	while(b_)
	{
		b[i]=b_%10;
		b_/=10;
		i++;
	}
	if(a[3]<=9)
	{
		a[3]=9;
	}else if(a[2]<=9){
		a[2]=9;
	}else if(a[1]<=9){
		a[1]=9;
	}
	if(b[3]>=1)
	{
		b[3]=1;
	}else if(b[2]>=0){
		b[2]=0;
	}else if(b[1]>=0){
		b[1]=0;
	}
	int a_1=a[3]*100+a[2]*10+a[1];
	int b_1=b[3]*100+b[2]*10+b[1];
	//cout<<a_2<<' '<<b_2<<' '<<a_1<<" "<<b_1;
	cout<<max(a_1-b_2,a_2-b_1);
    return 0;
}

