#include <unistd.h>

void mx_printchar(char c);

void	mx_only_printable(void)
{
	int i = 126;
	while(i != 32)
	{
		mx_printchar(i);
		i--;	
	}
	mx_printchar('\n');
}
