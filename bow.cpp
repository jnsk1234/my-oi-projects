#include<iostream>
using namespace std;
struct bow
{
	char name[11];
	int math;
	int chinese;
	int tot;
};
int main()
{
	bow a;
	for(int i=1;i<=4;i++){
		cin>>a.name>>a.chinese>>a.math;
		a.tot=a.chinese+a.math;
		cout<<a.name<<' '<<a.chinese<<' '<<a.math<<' '<<a.tot;
	}
	return 0;
}
