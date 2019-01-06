#include <stdio.h>

/* 输出1000与50的和、1000的两倍 */

#define K 1000 		// 定义常量 

int main(void)
{
	int sum = K + 50;
	int mul = K * 2;
	printf("1000与50的和:%d \n1000的两倍:%d", sum, mul);
	return 0;
}
