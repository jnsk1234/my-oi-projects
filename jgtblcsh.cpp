#include<iostream>
using namespace std;
struct strw
{
	char name[11];
	int chinese;
	int math;
	int tot;
}a[2]={
	{"xiaozhi",90,90,180},
	{"xiaozhi",80,90,170}
};
int main()
{
	strw b={"xiaoming",90,80,170};
	cout<<b.name<<' '<<b.chinese<<' '<<b.math<<" "<<b.tot<<endl;
	for(int i=0;i<2;i++){
		cout<<a[i].name<<' '<<a[i].chinese<<' '<<a[i].math<<' '<<a[i].tot<<endl;
	}
	return 0;
}
