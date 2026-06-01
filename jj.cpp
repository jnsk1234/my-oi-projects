#include"iostream"
#include"cstring"
using namespace std;
int main()
{
int a,b;
char s[1000];
a=0;
gets(s);
for(int i=0;i<strlen(s);i++)
{
if(s[i]>='a'&&s[i]<='z')a++;

}
cout<<a<<endl;

}
