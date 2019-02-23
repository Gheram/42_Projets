#include <stdlib.h>

int		count(unsigned int nb, int base)
{
    int	i;

    i = 0;
    if (nb == 0)
        return (1);
    while (nb > 0)
    {
        nb = nb / base;
        i++;
    }
    return (i);
}

char	*ft_itoa_base(int value, int base)
{
    unsigned int	nb;
    int				sign;
    int				i;
    char			*res;

    sign = 0;
    if (value >= 0)
        nb = value;
    else
    {
        if (base == 10)
            sign = 1;
        nb = -1 * value;
    }
    i = count(nb, base) + sign;
    res = (char *)malloc(sizeof(char) * i + 1);
    res[i] = '\0';
    i--;
    if (nb == 0)
        res[i] = '0';
    while (nb > 0)
    {
        if ((nb % base) <= 9)
            res[i] = (nb % base) + '0';
        else
            res[i] = (nb % base) + 'A' - 10;
        nb = nb / base;
        i--;
    }
    if (sign == 1)
        res[i] = '-';
    return (res);
}

#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_itoa_base(42, 10));
    printf("%s\n", ft_itoa_base(-42, 10));
    printf("%s\n", ft_itoa_base(42, 2));
    printf("%s\n", ft_itoa_base(-42, 2));
    printf("%s\n", ft_itoa_base(42, 16));
    printf("%s\n", ft_itoa_base(15, 16));
    printf("%s\n", ft_itoa_base(42442, 10));
    printf("%s\n", ft_itoa_base(-78423655, 10));
    return (0);
}
