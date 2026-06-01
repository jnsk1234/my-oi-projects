#include<iostream>
#include<ctime>
#include<csignal>
using namespace std;
int main()
{
	srand(time(0));
	int a=0,b=0,c;
	bool is_correct=true;
	for(;;)
	{
		//TODO
		if(is_correct)
		{
			a=rand()%100;
			b=rand()%100;
			
		}
		cout<<a<<"+"<<b<<"="<<"?"<<endl;
		cin>>c;
		if(a+b!=c)
		{
			is_correct=false;
			cout<<"´íÎó"<<endl;
			
			
		}
		else
		{
			is_correct=true;
			cout<<"ÕýÈ·"<<endl;
			
		}	
	}
	return 0;
}
