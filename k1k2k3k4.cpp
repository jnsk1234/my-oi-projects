#include<iostream>
using namespace std;
const int N=255;
char s[N+1];

int main(){
	int k1=0;
	int k2=0;
	int k3=0;
	int k4=0;
	cin.getline(s,N+1);
	for(int i=1;s[i]!=0;i++){
		if((s[i]>='0')&&(s[i]<='9'))
		{
			k1++;
		}
		else if((s[i]>='A')&&(s[i]<='Z'))
		{
			k2++;
		}
		else if((s[i]>='a')&&(s[i]<='z'))
		{
			k3++;
		}
		else
		{
			k3++;
		}
	}
	cout<<k1<<' '<<k2<<' '<<k3<<' '<<k4;
	return 0;
}
