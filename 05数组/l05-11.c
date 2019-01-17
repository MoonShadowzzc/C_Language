/* 查找数组中是否存在某值x，如果存在输出其下标 */
#include <stdio.h>
void main()
{
	int i=0,x=0;
	int a[10] = {10,23,45,67,78,89,35,68,76,88};
	printf("The array is : \n");
	for(i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	printf("Input x : ");
	scanf("%d", &x);
	for(i=0; i<10; i++)
	{
		if(a[i] == x)	break;
	}
	if(i<10)
		printf("Index of %d is %d.\n", x, i);
	else
		printf("%d is not in array!", x);
} 
