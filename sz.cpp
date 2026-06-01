#include<iostream>
using namespace std;
int main(){
	int a[50];
	int total=0;
	for(int i=0;i<50;i++){
		cin>>a[i];
		total+=a[i];
	}
	double eee=total/50.0;
	for(int i=0;i<50;i++)
	{
		if(a[i]<eee){
			cout<<"NO."<<(i+1)<<" "<<a[i];
		}
	}
	return 0;
}
