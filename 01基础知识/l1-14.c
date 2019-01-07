#include <stdio.h>

/* 强制类型转换  强制转换是临时的转换
                 不会改变变量的值*/
void main()
{
	int i=0, j=0, k=0;
	float x=5.8, y=3.7, f=8.56;
	
	i= (int)(x + y);
	j= (int)x + y;
	k= (int)f % 3;
	
	printf("i=%d, j=%d, k=%d, x=%f\n", i, j, k, x);
} 
