#include<iostream>
using namespace std;
int b[101];
int main()
{
	int n,x;
	int w;
	cin>>n>>x;
	for(int i=n;i<=x;i++){
		cin>>i;
		b[i]++;
	}
	for(int i=0;i<=100;i++){
		for(int j=x;j<=b[i];j/=10){
			if(i%2==1)
			{
				w++;
			}
			
		}
		
	}
	cout<<endl;
	return 0;
}
