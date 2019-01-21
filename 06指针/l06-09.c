/* 通过指针变量引用字符串 */
#include <stdio.h>
void main() 
{
	char *p = "first";
	puts(p);
	p = "second";
	for( ; *p!='\0'; p++)
		putchar(*p);
}
