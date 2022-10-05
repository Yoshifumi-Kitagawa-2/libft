#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    printf("result of ft_isalpha\n");
    printf("a：%d\n", ft_isascii('a'));
    printf("9：%d\n", ft_isascii('9'));
    printf("1234567：%d\n", ft_isascii(1234567));
    printf("!：%d\n", ft_isascii('!'));
    printf("====================\n");
    printf("result of isalpha\n");
    printf("a：%d\n", isascii('a'));
    printf("9：%d\n", isascii('9'));
    printf("1234567：%d\n", isascii(1234567));
    printf("!：%d\n", isascii('!'));
    return (0);
}