/* 输入3个数字，输出其中最大的（指针） */
#include <stdio.h>
void main()
{
	int a = 0, b = 0, c = 0;
	int *p = &a, *q = &b, *w = &c, *max =p;
	
	printf("Input a, b, c:");
	scanf("%d,%d,%d", p, q, w);
	
	if(*max < *q)  max=q;
	if(*max < *w)  max=w; 
	printf("a=%d, b=%d, c=%d, max=%d",a,b,c,*max);
	
} 
