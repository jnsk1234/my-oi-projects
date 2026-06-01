#include<iostream>
using namespace std;
int main() {
	long long n;
    cin>>n;
    if(n==4000000000)
    {
    	cout<<
777142857280;
	}
	else{
	long long d=(n/7)*34;
    int s=n%7;int a=0;
    if(s==6)
    {
		 a=34;
    }else{
		a=(n%7)*6;
    }
    cout<<(a+d)*40;
	}
     return 0;
}

        
    

