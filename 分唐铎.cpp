#include<cstdio>
int main()
{
	int a,b,c,d,e;
	int f,n;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=a+b+c+d+e;
	a/=3;e+=a;b+=a;
	b/=3;a+=b;c+=b;
	c/=3;b+=c;d+=c;
	d/=3;c+=d;e+=d;
	e/=3;d+=e;a+=e;
	n=a+b+c+d+e;
	printf("%d %d %d %d %d\n",a,b,c,d,e);
	int r=f-n;
	printf("%d",r); 
	return 0;
	
}
