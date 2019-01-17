/* 定义一个4*6的数组，并将前五列元素的平均值分别放在同一行第六列上 */
#include <stdio.h>
void main()
{
	double a[4][6] = {0};
	int i=0,j=0;
	double sum=0,avg=0;
	
	for(i=0;i<4;i++)
	{
		sum = 0;
		avg = 0;
		for(j=0;j<5;j++)
		{
			scanf("%lf", &a[i][j]);
			sum += a[i][j];
		}
		avg = sum/5;
		a[i][5] = avg;
		printf("sum = %lf, avg = %lf", sum, avg);
	}
	
	printf("\n4*6 array:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
			printf("%5.2lf",a[i][j]);
		printf("\n");
	}
	
} 
