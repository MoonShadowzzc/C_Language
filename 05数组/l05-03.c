/* 输入10个学生的成绩，计算其平均成绩，
   并统计不低于平均分的学生的人数。    */
#include <stdio.h>
void main()
{
	int i = 0;
	int count = 0;
	double total = 0.0;
	double a[10];
	double avg = 0.0;
	
	printf("Input Scores:\n");
	for(i=0; i<10; i++)
	{
		printf("第 %d 位同学:", i+1);
		scanf("%lf", &a[i]);
		total += a[i]; 
	}
	avg = total/10;
	
	for(i=0; i<10; i++)
	{
		if(a[i] >= avg)
		{
			count++;
		}
	}
	printf("avg = %.2lf, count = %d", avg, count);	
}
