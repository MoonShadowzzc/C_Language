/* 自定义函数文件fun.me */
#include <stdio.h>
#include "fun.me"
void main()
{
	int a=0;
	myprint();
	a = (int)mypow((double)myfac(3),2);
	printf("%d\n",a);
	myprint_n(a);
}
