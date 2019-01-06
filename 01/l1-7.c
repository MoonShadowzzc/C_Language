#include <stdio.h>

/* 用%d格式说明符输出一个整形常量和实数 */

int main(void) 
{
	printf("%d, %d \n",21, 21.5);
	printf("%d, %lf \n", 21, 21);
	printf("%d, %lf \n",21, 21.5);
	return 0;
}
