/* 	单词数统计-以空格分割 
	*/
#include <stdio.h>
void main() 
{
	int count = 0;
	int i = 0;
	char s[80] = "";
	puts("Input string:");
	gets(s);
	if(s[0] != ' '&& s[0] != '\0') count++;
	while(s[i] != '\0')
	{
		if(s[i] == ' ')
		{
			if(s[i+1] != ' ' && s[i+1]!='\0')
				count++;
		}
		i++;
	}
	printf("%s, has %d words\n", s, count);
}
