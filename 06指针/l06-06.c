/* 定义含有10个元素的数组：按顺序输出数组中的元素
 将数组元素逆序排列并存储后输出（只允许开辟一个临时单元） */
#include <stdio.h>
void main() 
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int i = 0, t = 0;
	int *p = a, *q = NULL;
	for(i=0; i<10; i++) 
		printf("%4d", *(p+i));	// 指针不移动 
	printf("\n");
	q = a+9;
	while(p < q)
	{
		t = *p; *p = *q; *q = t;
		p++; q--;
	}	
	for(p=a; p<a+10; p++)
		printf("%4d", *p);
}
