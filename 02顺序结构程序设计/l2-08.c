/* 用printf函数按指定宽度输出实型数据 */
#include <stdio.h>
void main()
{
	printf("**%f**\n",100.567);
	printf("**%12f**\n",100.567);
	printf("**%-12f**\n",100.567);
	printf("**%-6.2f**\n",1.567);
	printf("**%6.2f**\n",1.567);
	printf("**%6.0f**\n",1.567);
	printf("**%.2f**\n",1.567);
}
