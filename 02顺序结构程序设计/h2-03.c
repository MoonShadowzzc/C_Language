/* 
  从键盘输入两个数字字符并分别存放在字符型变量a，b中，
 要求通过程序将这两个数字相加后输出，例如，输入字符型
 数字‘7’和‘5’，输出整形12                         
*/
#include <stdio.h>
void main()
{
	char a = '\0', b = '\0';
	printf("Input a(Type of char):");
	a = getchar();
	printf("Input b(Type of char):");
	b = getchar();
	int sum = (a-'0') +(b-'0');
	printf("%c + %c = %d", a, b, sum);
}
