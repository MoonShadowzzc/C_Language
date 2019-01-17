/* 字符串输入输出程序 */
#include <stdio.h>
void main()
{
	char a[10] = "";
	char b[10] = "";
	
		
	gets(a);		// 以回车为结束符 
	scanf("%s", b);	// 空格、跳格或回车都被认作结束符 
	puts(a);		//  sit down ==> sit down 
	printf("%s",b);	//  sit down ==> sit
}

