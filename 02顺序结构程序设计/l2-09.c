/* 在scanf函数中指定输入数据的宽度 */
#include <stdio.h>
void main()
{
	int a = 0;
	scanf("a=%3d",&a);
		// 12回车  a=0
		// a=1234回车 a=123
		// a=12回车 a=12 
	printf("a=%d",a);
 } 
