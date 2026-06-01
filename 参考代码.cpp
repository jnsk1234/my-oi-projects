#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
struct Stubent
{
	int score;
	string name;
}student[100];
bool cmp(Stubent a,Stubent b)
{
	if(a.score>b.score)
	{
		return true;
	}
	if(a.score<b.score)
	{
		//TODO
		return false;
	}
	if(a.name<b.name)
	{
		//TODO
		return true;
	}
	return false;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>student[i].name;
		cin>>student[i].score;
	}
	sort(student,student+n,cmp);
	for(int i=0;i<n;i++)
	{
		//TODO
		cout<<student[i].name<<' '<<student[i].score<<endl;
		
	}
	return 0;
	
}
