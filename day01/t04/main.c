#include <stdio.h>
void mx_printchar(char c);

int		main(void)
{
	char c = 'h';
	//char test = NULL;
	char *n = NULL;
	mx_printchar('D');
	mx_printchar(71);
	mx_printchar(c);
	//mx_printchar(test);
	//mx_printchar(*n);
	mx_printchar('_');
	return 0;
}
