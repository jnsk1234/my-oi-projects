#include<stdio.h>
int main()
{
	char n[1000][9];
	int s[1000][4],i,j,k,max;
	scanf("%d",&i);
	for(j=0;j<i;j++)
	{

		scanf("%s",&n[j]);
		scanf("%d",&s[j][0]);
		scanf("%d",&s[j][1]);
		scanf("%d",&s[j][2]);
		s[j][3]=s[j][0]+s[j][1]+s[j][2];
		if(s[j][3]>max)
		{
			max=s[j][3];
			k=j;
		}
	}
	printf("%s %d %d %d\n",n[k],s[k][0],s[k][1],s[k][2]);
}

