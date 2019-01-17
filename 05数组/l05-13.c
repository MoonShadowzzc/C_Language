/* ×Ö·û´® */
#include <stdio.h>
void main()
{
	int i=0;
	char a[] = "K";			// char a[] = {'K','\0'};
	char b[] = {"Sit down"};	// char b[9] = "Sit down";
	while(a[i] != '\0')
	{
		putchar(a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while(b[i] != '\0')
	{
		putchar(b[i]);
		i++;
	}
	printf("\n");
 } 
