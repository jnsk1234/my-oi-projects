#include<iostream>
#include<algorithm>
struct a{
	char sx[6];//属性
	int year;//年
	int month;//月
	int day;//日
	int big;// 大小
	char name[21];//名字 
}; 
bool cmp(a x,a y)
{
    return x.big>y.big; 
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	a s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i].sx>>s[i].year>>s[i].month>>s[i].day>>s[i].big>>s[i].name;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		printf("%6s %-12d/%02d/%02d %-15d %s",s[i].sx,s[i].year,s[i].month,s[i].day,s[i].big,s[i].name);
		cout<<endl;
	}
    return 0;
}

