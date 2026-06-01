#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,x;
	freopen("uuuuuuu.txt","r",stdin);
	freopen("eeeee.txt","w",stdout);
	for(int i=0;i<5;i++){
		cin>>a;
		x+=a;
	}
	cout<<x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
