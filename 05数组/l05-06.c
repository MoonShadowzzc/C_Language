/* 定义含有10个元素的数组，并将数组
   中的元素按逆序重新存放后输出 */
#include <stdio.h>
void main()
{
	int i = 0;
	int t = 0;
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	for(i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	for(i = 0; i<10/2; i++)
	{
		t = a[i];
		a[i] = a[10-1-i];
		a[10-1-i] = t;
	}
	for(i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}
