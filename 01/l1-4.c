#include <stdio.h>

/* 写出5和6的和与平均值 */

int main(void) 
{
	int a=5, b=6, sum;
	float avg;
	
	sum = a + b;
	avg = sum/2.0;
	
	printf("sum = %d\navg = %.2f",sum, avg);  
	return 0;
}
