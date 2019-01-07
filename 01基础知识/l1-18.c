#include <stdio.h>
/* 显示特殊字符*/
void main()
{
	char c1 = '\0',c2 = '\0';
	c1 = '\1';		// 用八进制表示转义字符 
	c2 = '\x1';		// 用十六进制表示转义字符 
	printf("%c---%c \n", c1, c2);
	printf("%c---%c \n", '\25', '\x15');
	printf("I'm' \"OK\"\n") ;
}
