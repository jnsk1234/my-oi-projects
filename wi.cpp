#include<iostream>
using namespace std;
struct wi
{
	char name[11];
	int math;
	int chinese;
	int tot;
};
int main()
{
	
	int n;
	cin>>n;
	wi a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i].name>>a[i].chinese>>a[i].math;
		a[i].tot=a[i].chinese+a[i].math;
	}
	for(int i=1;i<=n;i++){
		cout<<a[i].name<<' '<<a[i].chinese<<' '<<a[i].math<<' '<<a[i].tot<<endl;
	}
}
