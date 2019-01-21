/* 字符串复制 */
#include <stdio.h>
void main()
{
	char a[50] = "", b[80] = "";
	char *p = NULL, *q = NULL;
	p = a; q = b;
	printf("Input string:");
	gets(a);
	while(*p)
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0';
	puts(b);		// 不能用put（q）； 
}
