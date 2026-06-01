#include<iostream>
#include<algorithm>
struct a
{
	int gubin;//¾ä±ú 
	double time;//Ê±¼ä 
	double lc;//ÄÚ´æ
	int id;
	char name[30]; 
};
bool cmp(a x,a y)
{
    return x.time>y.time; 
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	a s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i].gubin>>s[i].time>>s[i].lc>>s[i].id>>s[i].name;
	}
	sort(s,s+n,cmp);
	for(int i=0;i<n;i++)
	{
		printf("%8d %10.2f %10.2f %8d %-s \n",s[i].gubin,s[i].time,s[i].lc,s[i].id,s[i].name);
	 }
    return 0;
}

