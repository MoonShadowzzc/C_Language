/* 字符串处理函数 */
#include <stdio.h> 
#include <string.h>	// 字符串处理头函数

void main()
{
	char a[80] = "";
	int count = 0;
	gets(a);
	count = strlen(a);
	printf("%s的长度为%d", a, count);
} 
