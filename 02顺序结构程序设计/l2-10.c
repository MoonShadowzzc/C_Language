/* 从键盘输入三个数12、A、34分别存放在a,b,c中 */
#include <stdio.h> 
void main()
{
	int a=0, c=0;
	char b='\0';
	printf("Input a, b, c:");
	scanf("%d,%c,%d", &a, &b, &c);
	printf("%d, %c, %d", a, b, c);
}
 
