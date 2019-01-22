/* 指针与字符串数组 */
#include <stdio.h>
void main()
{
	int i=0;
	char a[3][4] = {"\0"},(*p)[4];
	printf("Input 3 strings: \n");
	for(p=a; p<a+3; p++)
		gets(p[0]);
	printf("Output 3 string: \n");
	for(i=0; i<3; i++)
		puts(a[i]);
}
