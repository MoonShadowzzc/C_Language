/* 编写一个使用字符输入函数getch和getche的程序 */
#include <stdio.h>
void main()
{
	char ch = '\0';
	ch = getche();	// 用户输入字符显示在屏幕上，但是不用用户输入回车就继续运行
	putchar(ch);
	ch = getch();	// 用户输入字符不显示在屏幕上，而且不用用户输入回车就继续运行
	putchar(ch);
	putchar('\n');
}
