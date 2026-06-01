#include<cstdio>
int main()
{
	char c='B';
	putchar(c);
	putchar('\x42');
	putchar(0x42);
	putchar(66);
	putchar('\'');
	putchar('\"');
	putchar('\\');
	return 0;
	
	
}
