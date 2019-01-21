/* 通过字符数组名引用字符串 */
#include <stdio.h>
#include <string.h>
void main()
{
	int i = 0;
	char a[8] = "first";
	puts(a);
	strcpy(a, "second");
	for(i=0; *(a+i)!='\0'; i++)
		putchar(*(a+i));
}
