#include<iostream>
#include<algorithm>
using namespace std;
struct Student
{
	char name[11];
	int chinese;
	int math;
	int zhongfeng;
};
Student a[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		//TODO
		cin>>a[i].name>>a[i].chinese>>a[i].math;
		a[i].zhongfeng=a[i].chinese+a[i].math;
		
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;i<i;j++){
			if(a[j].zhongfeng<a[j+i].zhongfeng){
				swap(a[i],a[j+i]);
			}
			
			//TODO
		}
		//TODO
	}
	for(int i=0;i<n;i++){
		cout<<a[i].name<<' ';
		cout<<a[i].chinese<<' ';
		cout<<a[i].math<<' ';
		cout<<a[i].zhongfeng<<endl;
		
		//TODO
	}
	return 0;
}
