#include<iostream>
#include<algorithm>
using namespace std;
struct jjb
{
	char name[11];
	int ch;
	int ma;
	int tot;
	
};
jjb a[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].name>>a[i].ch>>a[i].ma;
		a[i].tot=a[i].ch+a[i].ma;
		
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<=0;j++){
			for(int i=0;i<i;i++){
				if(a[j].tot<a[j+i].tot)
				{
					swap(a[j],a[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++){
		    cout<<a[i].name<<' '<<a[i].ch<<' '<<a[i].ma<<' '<<a[i].tot<<endl;
		}
	}
	return 0; 
}
