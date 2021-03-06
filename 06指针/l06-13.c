/* 指针的++ 操作 */
#include <stdio.h>
void main()
{
	int a[5] = {0,10,20,30,40}, *p = a;
	printf("*p : %d\n", *p);			// 0
	printf("*p++ : %d\n", *p++);		// ==>*(p++),++后置，先输出后+1 p指向a[1]  	0
	printf("(*p)++ : %d\n", (*p)++); 	// p已经指向a[1] 输出 10 指针并未移动	10
	printf("*(++p) : %d\n", *(++p)); 	// 先将p向后移动a[2],输出a[2]内容		20  
	printf("++*(p) : %d\n", ++*(p)); 	// 当前指向a[2]，++后输出				21 
}
