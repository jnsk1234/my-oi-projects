#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int j=i;j>0;j/=10){
			if(j%2==0){
				break;
			}
			else if(j<10){
				d++;
			}
		}
	}
	cout<<d<<endl;
	return 0;
}
