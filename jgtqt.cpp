#include<iostream>
#include<cstring>
using namespace std;
struct D
{
	int ye;
	int mo;
	int day;
};
struct P
{
	char name[11];
	D bir;
};
int main()
{
	P w;
	strcpy(w.name,"jianming");
	w.bir.ye=1977;
	w.bir.mo=12;
	w.bir.day=1;
	cout<<w.name<<' '<<w.bir.ye<<" "<<w.bir.mo<<' '<<w.bir.day<<endl;
	return 0;
}
