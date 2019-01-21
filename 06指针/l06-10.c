/* Çó×Ö·û´®³¤¶È */
#include <stdio.h>
void main()
{
	char a[80] = "", *p = NULL;
	p = a;
	gets(p); puts(p);
	while( *p!='\0') p++;
	printf("length = %d\n",p-a); 
}
