/* strcpy(a,b)字符串拷贝--把b复制到a中 */
#include <stdio.h>
#include <string.h>

void main()
{
	char a[50] = "";
	char b[90] = "";
	
	gets(a);
	strcpy(b,a);
	puts(b); 
} 
