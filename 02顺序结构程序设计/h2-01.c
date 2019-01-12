/* 编写程序输出sin30°+ 开方（12.56） （要求，不使用变量） */
#include <stdio.h>
#include <math.h>
void main()
{
	/*double a = sin(3.14*30/180);
	double b = sqrt(12.56);
	printf("%f\n %f\n",a,b);*/
	printf("%.2f",sin(3.14*30/180)+sqrt(12.56));
}
