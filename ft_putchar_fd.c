#include <unistd.h>

voidft_putchar(char c)
{
	write(1, &c, 1);
}