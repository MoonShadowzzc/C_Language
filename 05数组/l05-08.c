/* 输入10个整数存入数组中，删除其中最小的，并输出剩余的9个整数 */
#include <stdio.h>
void main()
{
	int i = 0;
	int k = 0;
	int a[10];
	
	printf("Input 10 numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%d : ", i+1);
		scanf("%d", &a[i]);
	}
	printf("before: ");
	for(i=0; i<10; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
	// 找出最小的数的下标 
	for(i=1; i<10; i++)
	{
		if(a[i] < a[k])	k = i;
	} 
	// 删除最小值，其他部分迁移 
	for(i=k; i<9; i++)
	{
		a[i] = a[i+1];
	}
	printf("after : ");
	for(i=0; i<9; i++)
	{
		printf("%5d", a[i]);
	}
	printf("\n");
}
