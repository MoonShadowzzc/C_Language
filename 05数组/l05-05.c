/* 字符数组的初始化 */
#include <stdio.h>
void main()
{
	int i = 0;
	char a[4] = {'G','o','o','d'};	// char a[] = {'G','o','o','d'};
	char b[4] = {'G'};				// char b[4] = {'G','\0','\0','\0'};
	char c[4] = {'\0'};				// char c[4] = {0,0,0,0};
	
	for(i=0; i<4; i++) 	printf("%c", a[i]);
	printf("\n");
	for(i=0; i<4; i++) 	printf("%c", b[i]);
	printf("\n");
	for(i=0; i<4; i++) 	printf("%c", c[i]);
	printf("\n");
} 
