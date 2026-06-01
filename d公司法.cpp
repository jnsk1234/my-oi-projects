#include<cstdio>
int main()
{
	int n;
	double f;
	char s[10];
	
	scanf("%3d,%*c,%lf%s",&n,&f,&s);
	printf("%d %f %s",n,f,s);
	return 0;
}
