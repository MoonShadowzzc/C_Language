/* 在由10个整形元素组成的数组中找出最大值并输出 */
#include <stdio.h>
void main()
{
	int i = 0;
	int a[10], max;
	
	printf("Input 10 Numbers:\n");
	for(i=0; i<10; i++)
	{
		printf("%d : ", i+1);
		scanf("%d", &a[i]);
	}
	max = a[0];
	for(i=1; i<10; i++)
	{
		if(max < a[i])	max = a[i];
	} 
	printf("Max : %d", max);
} 
