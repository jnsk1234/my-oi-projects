#include<bits/stdc++.h>
using namespace std;
struct A{

	string name;
	int chinese;
	int math;
	int t;
};
int main()
{
	A a;
	cin>>a.name>>a.chinese>>a.math;
	a.t=a.chinese+a.math;
	cout<<a.name<<' '<<a.chinese<<' '<<a.math<<' '<<a.t;
    return 0;
}

