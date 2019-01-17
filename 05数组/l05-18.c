/* strcmp(a,b) 比较两个字符串大小 */
#include <stdio.h>
#include <string.h>

void main()
{
	char a[30] = "";
	char b[30] = "";
	gets(a);
	gets(b);
	if(strcmp(a,b)>0) 
		printf("a > b");
	else if(strcmp(a,b)==0)
			printf("a = b");
	else printf("a < b");
} 
