/* 调用函数，实现在屏幕上输出若干个“*”的功能 */
#include <stdio.h>
void myprint()
{
	int i = 0;
	for(i=1; i<=20; i++)
	{
		printf("*");
	}
	printf("\n");
} 
 
 void myprint_n(int n)
 {
 	int i = 0;
 	for(i=1; i<=n; i++)
 	{
 		printf("*");
	}
	printf("\n");
 }
 
 void main()
 {
 	myprint();
 	myprint_n(5);
 	myprint_n(10);
 	myprint();
 }
