#include<cstdio>
int main()
{
	char c;
	scanf("%c",&c);
	int d1;
	scanf("%d",&d1);
	short d2;
	scanf("%hd",&d2);
	long d3;
	scanf("%ld",&d3);
	unsigned u1;
	scanf("%u",&u1);
	unsigned short u2;
	scanf("%hu",&u2);
	int o;
	scanf("%o",&o);
	int x;
	scanf("%x",&x);
	float f1;
	scanf("%f",&f1);
	double f2;
	scanf("%if",&f2);
	printf("%c\n",c);
	printf("%d %hd %ld\n",d1,d2,d3);
	printf("%u %hd %lu\n",u1,d2,d3);
	printf("%o %x\n",o,x);
	printf("%f %f\n",f1,f2);
	return 0;
}
