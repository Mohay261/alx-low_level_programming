#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	int len;
	int i;
	len = 0;
	i = 0;

	while(*(str + i) != 0x00)
	{
		len++;
		i++;
	}

	//*(str + len) = '\n';
	str[12] = '\n';
	printf("%d\n", len);

}


int main(void)
{

	char str[] = "Hello World";
	_puts(str);


	return 0;
}