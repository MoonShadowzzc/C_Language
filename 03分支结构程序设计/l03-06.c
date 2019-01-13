/* 输入3个整数，输出其中最大的数 */
#include <stdio.h>
void main()
{
	int a,b,c,max;
	
	printf("Input a, b, c:");
	scanf("%d,%d,%d", &a, &b, &c);
	
	max = a;
	if(max < b)
		max = b;
	if(max < c) 
		max = c;
	printf("%d is the maximent of %d, %d, %d", max, a, b, c);
 } 
