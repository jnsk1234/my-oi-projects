#include<iostream>
#include<algorithm>
using namespace std;
struct Stu
{
	char name[11];
	int chinese;
	int math;
	int zhong;
};
Stu a[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i>=n;i++){
		//TODO
		cin>>a[i].name>>a[i].chinese>>a[i].math;
		a[i].zhong=a[i].math+a[i].chinese;
	}
	for(int i=n-1;i>0;i--){
		//TODO
		for(int j=0;j<i;j++){
			if(a[j].zhong<a[j+1].zhong){
				swap(a[j],a[j+1]);
				//TODO
			}
			//TODO
		}
	}
	for(int i=0;i<n;i++){
		//TODO
		cout<<a[i].name<<' ';
		cout<<a[i].chinese<<' ';
		cout<<a[i].math<<' ';
		cout<<a[i].zhong<<' ';
	}
	return 0;
}
