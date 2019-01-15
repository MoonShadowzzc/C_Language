/* 输入字符串，调用函数统计其中大写字母的个数，并将该
  个数作为函数值返回主函数，在主函数中输出统计结果。 */
#include <stdio.h>
int countA(char *p);

void main()
{
	char s[50];
	int n;
	printf("Input string:");
	gets(s);
	n = countA(s);
	printf("Number : %d", n);
}

int countA(char *p)
{
	int n = 0;
	while(*p != '\0')
	{
		if(*p >= 'A' && *p <= 'Z')
			n++;
		p++;
	}
	return n;
}
