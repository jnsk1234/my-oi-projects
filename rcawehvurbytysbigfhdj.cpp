#include<iostream>
using namespace std;
int main()
{
	int d,y;
	cin>>d;
	y=1+2*d;
    for(int a=1;a<=d;a++)
    {
        for(int b=0;b<=a;b++)
        {
            cout<<" ";
        }
        for(int c=0;c<y-2*a;c++)
        {
            cout<<"*";
        }
            cout<<endl;
    }
    return 0;
}
