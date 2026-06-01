#include<iostream>
#include<cstring>
using namespace std;
struct atg
{
	int year;
	int math;
	int ri;
};
struct wfewz
{
	char name[11];
	atg br;
};
int main()
{
	wfewz jjb;
	strcpy(jjb.name,"xiaoming");
	jjb.br.year=2017;
	jjb.br.math=5;
	jjb.br.ri=31;
	cout<<jjb.name<<' '<<jjb.br.year<<' '<<jjb.br.math<<' '<<jjb.br.ri;
	return 0;
}
