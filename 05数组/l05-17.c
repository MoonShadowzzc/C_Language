/* strcat(a,b) 将b串接到a的后面 */
#include <stdio.h>
#include <string.h>

void main()
{
	char a[80] = "";
	char b[30] = "";
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
 } 
