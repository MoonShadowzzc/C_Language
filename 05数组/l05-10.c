/* 在数组中插入数据 */
#include <stdio.h>
void main()
{
	int i=0,k=0,x=0;
	int a[11] = {12,34,45,3,7,2,67,97,64,82};
	printf("Intput k : ");
	scanf("%d", &k);
	printf("Input x : ");
	scanf("%d", &x);
	for(i=10; i>k; i--)
	{
		a[i] = a[i-1];
	}
	a[k] = x;
	printf("The array is : \n");
	for(i=0; i<11; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
} 
