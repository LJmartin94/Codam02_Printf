#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int debug = 1;

    int min = INT_MIN;
    int max = INT_MAX;
    int zero = 0;
    int minone = -1;
    int c = '*';
    char *lmao = "%Lah% %Mao%";
    int *ptr = &c;
    unsigned int bob = 11 + (16*16*11);
    unsigned int nope = -1;

    int real_ret = 0;
    int my_ret = 0;

    real_ret =  printf("Real: Hoi.\n");
    my_ret = ft_printf("Myyy: Hoi.\n");
    
    printf("Return val (real printf): %d\n", real_ret);
    printf("Return val (myyy printf): %d\n", my_ret);

    real_ret =  printf("Output (real printf): %d %i, %d %i, %d %i, %d %i, %d %i, %c, %s, %p, %p, %%%%, %u, %u, %u, %u, %u, %x, %X, %x, %X,\n", min, min, max, max, zero, zero, minone, minone, c, c, c, lmao, lmao, ptr, min, max, zero, minone, c, bob, bob, nope, nope);
    my_ret = ft_printf("Output (myyy printf): %d %i, %d %i, %d %i, %d %i, %d %i, %c, %s, %p, %p, %%%%, %u, %u, %u, %u, %u, %x, %X, %x, %X,\n", min, min, max, max, zero, zero, minone, minone, c, c, c, lmao, lmao, ptr, min, max, zero, minone, c, bob, bob, nope, nope);
    
    printf("Return val (real printf): %d\n", real_ret);
    printf("Return val (myyy printf): %d\n", my_ret);

    real_ret =  printf("%c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c \n",  c, lmao, ptr, c, c, nope, nope, nope, nope, nope, nope, c, c, ptr, lmao, c);
    my_ret = ft_printf("%c%s%p%d%i%u%x%X%%%%%X%x%u%i%d%p%s%c \n",  c, lmao, ptr, c, c, nope, nope, nope, nope, nope, nope, c, c, ptr, lmao, c);

    printf("Return val (real printf): %d\n", real_ret);
    printf("Return val (myyy printf): %d\n", my_ret);

    if (debug)
    {
        int *val;
        val = &min;
        printf("Myyy printf: %d\n", ft_printf("%d\n", *val));
        printf("Real printf: %d\n", printf("%d\n", *val));
    }


    
    return(0);
}