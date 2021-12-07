/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_hexa_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/12 03:57:32 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int		ft_printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	unsigned int	val;

	val = 42;
	val = 15;
	val = 16;
	val = 185334478;
	val = -1;
	val = 4294967295;
	val = -4294967295;
	val = 0;
	val = 2457;


	int broken = 0;
	int	bonus = 0;

	printf(" (%d)\n", printf("Handling minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0x|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1x|", 0));
	printf(" (%d)\n", printf("Mfw 0: |%0x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0x|", val));
	printf(" (%d)\n", printf("Mfw 1: |%1x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1x|", val));
	printf(" (%d)\n", printf("Mfw 2: |%2x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2x|", val));
	printf(" (%d)\n", printf("Mfw 3: |%3x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3x|", val));
	printf(" (%d)\n", printf("Mfw 4: |%4x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4x|", val));
	printf(" (%d)\n", printf("Mfw 5: |%5x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5x|", val));
	printf(" (%d)\n", printf("Mfw 10: |%10x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10x|", val));
	printf(" (%d)\n", printf("Mfw 15: |%15x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15x|", val));
	printf(" (%d)\n", printf("Mfw 42: |%42x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	ft_printf(" (%d)\n", ft_printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0x|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1x|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2x|", 0));
	printf(" (%d)\n", printf("Precis. 0: |%.0x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0x|", val));
	printf(" (%d)\n", printf("Precis. 1: |%.1x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1x|", val));
	printf(" (%d)\n", printf("Precis. 2: |%.2x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2x|", val));
	printf(" (%d)\n", printf("Precis. 3: |%.3x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3x|", val));
	printf(" (%d)\n", printf("Precis. 4: |%.4x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4x|", val));
	printf(" (%d)\n", printf("Precis. 5: |%.5x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5x|", val));
	printf(" (%d)\n", printf("Precis. 10: |%.10x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10x|", val));
	printf(" (%d)\n", printf("Precis. 15: |%.15x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15x|", val));
	printf(" (%d)\n", printf("Precis. 42: |%.42x|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42x|", val));

	printf(" (%d)\n", printf("(0) P .00: |%.00x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00x|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01x|", 0));	
	printf(" (%d)\n", printf("P .00: |%.00x|", val));
	ft_printf(" (%d)\n", ft_printf("P .00: |%.00x|", val));	
	printf(" (%d)\n", printf("P .01: |%.01x|", val));
	ft_printf(" (%d)\n", ft_printf("P .01: |%.01x|", val));
	printf(" (%d)\n", printf("P .02: |%.02x|", val));
	ft_printf(" (%d)\n", ft_printf("P .02: |%.02x|", val));
	printf(" (%d)\n", printf("P .03: |%.03x|", val));
	ft_printf(" (%d)\n", ft_printf("P .03: |%.03x|", val));
	printf(" (%d)\n", printf("P .04: |%.04x|", val));
	ft_printf(" (%d)\n", ft_printf("P .04: |%.04x|", val));
	printf(" (%d)\n", printf("P .05: |%.05x|", val));
	ft_printf(" (%d)\n", ft_printf("P .05: |%.05x|", val));
	printf(" (%d)\n", printf("P .010: |%.010x|", val));
	ft_printf(" (%d)\n", ft_printf("P .010: |%.010x|", val));
	printf(" (%d)\n", printf("P .015: |%.015x|", val));
	ft_printf(" (%d)\n", ft_printf("P .015: |%.015x|", val));
	printf(" (%d)\n", printf("P .042: |%.042x|", val));
	ft_printf(" (%d)\n", ft_printf("P .042: |%.042x|", val));

	printf(" (%d)\n", printf("P .007: |%.007x|", val));
	ft_printf(" (%d)\n", ft_printf("P .007: |%.007x|", val));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007x|", val));
	ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007x|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0x|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0x|", 0));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0x|", 10));
	ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0x|", 10));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1x|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1x|", 0));
	printf(" (%d)\n", printf("0.0: |%0.0x|", val));
	ft_printf(" (%d)\n", ft_printf("0.0: |%0.0x|", val));
	printf(" (%d)\n", printf("1.1: |%1.1x|", val));
	ft_printf(" (%d)\n", ft_printf("1.1: |%1.1x|", val));
	printf(" (%d)\n", printf("2.2: |%2.2x|", val));
	ft_printf(" (%d)\n", ft_printf("2.2: |%2.2x|", val));
	printf(" (%d)\n", printf("3.2: |%3.2x|", val));
	ft_printf(" (%d)\n", ft_printf("3.2: |%3.2x|", val));
	printf(" (%d)\n", printf("2.3: |%2.3x|", val));
	ft_printf(" (%d)\n", ft_printf("2.3: |%2.3x|", val));
	printf(" (%d)\n", printf("8.4: |%8.4x|", val));
	ft_printf(" (%d)\n", ft_printf("8.4: |%8.4x|", val));
	printf(" (%d)\n", printf("4.8: |%4.8x|", val));
	ft_printf(" (%d)\n", ft_printf("4.8: |%4.8x|", val));
	printf(" (%d)\n", printf("8.8: |%8.8x|", val));
	ft_printf(" (%d)\n", ft_printf("8.8: |%8.8x|", val));
	printf(" (%d)\n", printf("8.2: |%8.2x|", val));
	ft_printf(" (%d)\n", ft_printf("8.2: |%8.2x|", val));
	printf(" (%d)\n", printf("2.8: |%2.8x|", val));
	ft_printf(" (%d)\n", ft_printf("2.8: |%2.8x|", val));
	printf(" (%d)\n", printf("8.1: |%8.1x|", val));
	ft_printf(" (%d)\n", ft_printf("8.1: |%8.1x|", val));
	printf(" (%d)\n", printf("1.8: |%1.8x|", val));
	ft_printf(" (%d)\n", ft_printf("1.8: |%1.8x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0x|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0x|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1x|", 0));
	printf(" (%d)\n", printf("01.1: |%01.1x|", val));
	ft_printf(" (%d)\n", ft_printf("01.1: |%01.1x|", val));
	printf(" (%d)\n", printf("02.2: |%02.2x|", val));
	ft_printf(" (%d)\n", ft_printf("02.2: |%02.2x|", val));
	printf(" (%d)\n", printf("03.2: |%03.2x|", val));
	ft_printf(" (%d)\n", ft_printf("03.2: |%03.2x|", val));
	printf(" (%d)\n", printf("02.3: |%02.3x|", val));
	ft_printf(" (%d)\n", ft_printf("02.3: |%02.3x|", val));
	printf(" (%d)\n", printf("08.4: |%08.4x|", val));
	ft_printf(" (%d)\n", ft_printf("08.4: |%08.4x|", val));
	printf(" (%d)\n", printf("04.8: |%04.8x|", val));
	ft_printf(" (%d)\n", ft_printf("04.8: |%04.8x|", val));
	printf(" (%d)\n", printf("08.8: |%08.8x|", val));
	ft_printf(" (%d)\n", ft_printf("08.8: |%08.8x|", val));
	printf(" (%d)\n", printf("08.2: |%08.2x|", val));
	ft_printf(" (%d)\n", ft_printf("08.2: |%08.2x|", val));
	printf(" (%d)\n", printf("02.8: |%02.8x|", val));
	ft_printf(" (%d)\n", ft_printf("02.8: |%02.8x|", val));
	printf(" (%d)\n", printf("08.1: |%08.1x|", val));
	ft_printf(" (%d)\n", ft_printf("08.1: |%08.1x|", val));
	printf(" (%d)\n", printf("01.8: |%01.8x|", val));
	ft_printf(" (%d)\n", ft_printf("01.8: |%01.8x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0: |%0x|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00: |%00x|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 01: |%01x|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 02: |%02x|", 0));
	printf(" (%d)\n", printf("0: |%0x|", val));
	ft_printf(" (%d)\n", ft_printf("0: |%0x|", val));
	printf(" (%d)\n", printf("00: |%00x|", val));
	ft_printf(" (%d)\n", ft_printf("00: |%00x|", val));
	printf(" (%d)\n", printf("01: |%01x|", val));
	ft_printf(" (%d)\n", ft_printf("01: |%01x|", val));
	printf(" (%d)\n", printf("02: |%02x|", val));
	ft_printf(" (%d)\n", ft_printf("02: |%02x|", val));
	printf(" (%d)\n", printf("03: |%03x|", val));
	ft_printf(" (%d)\n", ft_printf("03: |%03x|", val));
	printf(" (%d)\n", printf("08: |%08x|", val));
	ft_printf(" (%d)\n", ft_printf("08: |%08x|", val));
	printf(" (%d)\n", printf("000000000008: |%000000000008x|", val));
	ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008x|", val));
	printf(" (%d)\n", printf("010: |%010x|", val));
	ft_printf(" (%d)\n", ft_printf("010: |%010x|", val));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010x|", val));
	ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0x|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00x|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01x|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02x|", 0));

	printf(" (%d)\n", printf("-0: |%-0x|", val));
	ft_printf(" (%d)\n", ft_printf("-0: |%-0x|", val));
	printf(" (%d)\n", printf("-00: |%-00x|", val));
	ft_printf(" (%d)\n", ft_printf("-00: |%-00x|", val));
	printf(" (%d)\n", printf("-01: |%-01x|", val));
	ft_printf(" (%d)\n", ft_printf("-01: |%-01x|", val));
	printf(" (%d)\n", printf("-02: |%-02x|", val));
	ft_printf(" (%d)\n", ft_printf("-02: |%-02x|", val));
	printf(" (%d)\n", printf("-03: |%-03x|", val));
	ft_printf(" (%d)\n", ft_printf("-03: |%-03x|", val));
	printf(" (%d)\n", printf("-08: |%-08x|", val));
	ft_printf(" (%d)\n", ft_printf("-08: |%-08x|", val));
	printf(" (%d)\n", printf("0-8: |%0-8x|", val));
	ft_printf(" (%d)\n", ft_printf("0-8: |%0-8x|", val));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008x|", val));
	ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008x|", val));
	printf(" (%d)\n", printf("-010: |%-010x|", val));
	ft_printf(" (%d)\n", ft_printf("-010: |%-010x|", val));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010x|", val));
	ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010x|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0x|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1x|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2x|", 0));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0x|", val));
	printf(" (%d)\n", printf("Mfw -1: |%-1x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1x|", val));
	printf(" (%d)\n", printf("Mfw -2: |%-2x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2x|", val));
	printf(" (%d)\n", printf("Mfw -3: |%-3x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3x|", val));
	printf(" (%d)\n", printf("Mfw -4: |%-4x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4x|", val));
	printf(" (%d)\n", printf("Mfw -5: |%-5x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5x|", val));
	printf(" (%d)\n", printf("Mfw -10: |%-10x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10x|", val));
	printf(" (%d)\n", printf("Mfw --10: |%--10x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10x|", val));
	printf(" (%d)\n", printf("Mfw ---10: |%---10x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10x|", val));
	printf(" (%d)\n", printf("Mfw -15: |%-15x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15x|", val));
	printf(" (%d)\n", printf("Mfw -42: |%-42x|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0x|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1x|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0x|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1x|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2x|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0x|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2x|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2x|", 0));


	printf(" (%d)\n", printf("-0.0: |%-0.0x|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0x|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1x|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1x|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0x|", 5));
	ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0x|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1x|", 5));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1x|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2x|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2x|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0x|", 5));
	ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0x|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2x|", 5));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2x|", 5));


	printf(" (%d)\n", printf("-1.1: |%-1.1x|", val));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1x|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2x|", val));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2x|", val));
	printf(" (%d)\n", printf("-3.2: |%-3.2x|", val));
	ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2x|", val));
	printf(" (%d)\n", printf("-2.3: |%-2.3x|", val));
	ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3x|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4x|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", val));
	printf(" (%d)\n", printf("-4.8: |%-4.8x|", val));
	ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8x|", val));
	printf(" (%d)\n", printf("-8.8: |%-8.8x|", val));
	ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8x|", val));
	printf(" (%d)\n", printf("-8.2: |%-8.2x|", val));
	ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2x|", val));
	printf(" (%d)\n", printf("-2.8: |%-2.8x|", val));
	ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8x|", val));
	printf(" (%d)\n", printf("-8.1: |%-8.1x|", val));
	ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1x|", val));
	printf(" (%d)\n", printf("-1.8: |%-1.8x|", val));
	ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8x|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*x|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*x|", 1, val));
	printf(" (%d)\n", printf("Mfw *5: |%*x|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*x|",5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*x|",        5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|",        5, val));
	printf(" (%d)\n", printf("Mfw *10: |%*x|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*x|", 10, val));
	printf(" (%d)\n", printf("Mfw *i: |%*x|", val, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*x|", val, val));
	printf(" (%d)\n", printf("Mfw **5: |%*.*x|", 5, 6, val));
	ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*x|", 5, 6, val));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*x|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*x|", 1, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|", 5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|",5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|",      5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",      5, val));
	printf(" (%d)\n", printf("Precis. .*10: |%.*x|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*x|", 10, val));
	printf(" (%d)\n", printf("Precis. .*i: |%.*x|", val, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*x|", val, val));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*x|", 0, val));
	printf(" (%d)\n", printf("P .*01: |%.*x|", 01, val));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*x|", 01, val));
	printf(" (%d)\n", printf("P .*05: |%.*x|", 05, val));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*x|", 05, val));
	printf(" (%d)\n", printf("P .*010: |%.*x|", 010, val));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*x|", 010, val));
	printf(" (%d)\n", printf("P .*000000000007: |%.*x|", 000000000007, val));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*x|", 000000000007, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4x|", 8, val));
	printf(" (%d)\n", printf("*4.8: |%*.8x|", 4, val));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8x|", 4, val));
	printf(" (%d)\n", printf("*8.8: |%*.8x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8x|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*x|", 4, val));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*x|", 4, val));
	printf(" (%d)\n", printf("4.*8: |%4.*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*x|", 8, val));
	printf(" (%d)\n", printf("8.*8: |%8.*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*x|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*x|", 8, 4, val));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*x|", 8, 4, val));
	printf(" (%d)\n", printf("*4.*8: |%*.*x|", 4, 8, val));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*x|", 4, 8, val));
	printf(" (%d)\n", printf("*8.*8: |%*.*x|", 8, 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*x|", 8, 8, val));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*x|", 010, 4, val));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*x|", 010, 4, val));
	printf(" (%d)\n", printf(" *07.*4: |%*.*x|", 07, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*x|", 07, 4, val));
	printf(" (%d)\n", printf("*4.*010: |%*.*x|", 4, 010, val));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*x|", 4, 010, val));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*x|", 0x10, 4, val));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*x|", 0x10, 4, val));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*x|", 0x7, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*x|", 0x7, 4, val));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*x|", 4, 0x10, val));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*x|", 4, 0x10, val));
	printf("\n");



	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	printf(" (%d)\n", printf("*8: |%*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8: |%*x|", 8, val));
	printf(" (%d)\n", printf("0*8: |%0*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*x|", 8, val));
	printf(" (%d)\n", printf("00*8: |%00*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*x|", 8, val));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*x|", 8, val));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*x|", 0, val));
	printf(" (%d)\n", printf("-0*0: |%-0*x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*x|", 0, val));
	printf(" (%d)\n", printf("-0*3: |%-0*x|", 3, val));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*x|", 3, val));
	printf(" (%d)\n", printf("*(-03): |%*x|", -03, val));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*x|", -03, val));
	printf(" (%d)\n", printf("*(-5): |%*x|", -5, val));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*x|", -5, val));
	printf(" (%d)\n", printf("*(5): |%*x|", 5, val));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*x|", 5, val));
	printf(" (%d)\n", printf("-*(5): |%-*x|", 5, val));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*x|", 5, val));
	printf(" (%d)\n", printf("-8.4: |%-8.4x|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", val));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4x|", 8, val));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4x|", 8, val));
	printf(" (%d)\n", printf("*(-8).4: |%*.4x|", -8, val));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4x|", -8, val));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), val));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), val));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*x|", 4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*x|", 4, val));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*x|", -4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*x|", -4, val));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*x|", 0, val));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*x|", 1, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*x|", 1, val));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4x|", 0, val));
	printf(" (%d)\n", printf("*(0).4: |%*.4x|", 0, val));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4x|", 0, val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*x|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*x|", 1, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*x|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*x|",5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*x|",        5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*x|",        5, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*x|", 10, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*x|", 10, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*x|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*x|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*x|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|",5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*x|",      5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*x|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*x|", 10, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*x|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*x|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*x|", 0, 0));
	printf(" (%d)\n", printf("P .*01: |%.*x|", 01, 0));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*x|", 01, 0));
	printf(" (%d)\n", printf("P .*05: |%.*x|", 05, 0));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*x|", 05, 0));
	printf(" (%d)\n", printf("P .*010: |%.*x|", 010, 0));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*x|", 010, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*x|", 000000000007, 0));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*x|", 000000000007, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4x|", 8, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8x|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8x|", 4, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8x|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*x|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*x|", 4, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*x|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*x|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*x|", 8, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*x|", 8, 4, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*x|", 4, 8, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*x|", 4, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*x|", 8, 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*x|", 8, 8, 0));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*x|", 010, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*x|", 010, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*x|", 07, 4, 0));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*x|", 07, 4, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*x|", 4, 010, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*x|", 4, 010, 0));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*x|", 0x10, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*x|", 0x10, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*x|", 0x7, 4, 0));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*x|", 0x7, 4, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*x|", 4, 0x10, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*x|", 4, 0x10, 0));
	printf("\n");



	//int octal;

	// octal = 010;
	// octal--;

	// printf("octal: %i\n", octal);

	// //this will print 7.

	// int octal_atoi;

	// octal_atoi = atoi("010");
	// octal_atoi--;

	// printf("octal: %i\n", octal_atoi);

	// //this will print 9.

	// int hexadec;

	// hexadec = 0x10;
	// hexadec--;

	// printf("hexadec: %i\n", hexadec);

	// //this will print 15.

	// int hexadec_atoi;

	// hexadec_atoi = atoi("0x10");
	// hexadec_atoi--;

	// printf("hexadec: %i\n", hexadec_atoi);

	// //this will print -1.

	printf(" (%d)\n", printf("*8: |%*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8: |%*x|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*x|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*x|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*x|", 8, 0));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*x|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*x|", 0, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*x|", 3, 0));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*x|", 3, 0));
	printf(" (%d)\n", printf("*(-03): |%*x|", -03, 0));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*x|", -03, 0));
	printf(" (%d)\n", printf("*(-5): |%*x|", -5, 0));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*x|", -5, 0));
	printf(" (%d)\n", printf("*(5): |%*x|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*x|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*x|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*x|", 5, 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4x|", 0));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4x|", 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4x|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4x|", 8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4x|", -8, 0));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4x|", -8, 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), 0));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*x|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*x|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*x|", 4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*x|", -4, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*x|", -4, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*x|", 0, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*x|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*x|", 1, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4x|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4x|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4x|", 0, 0));


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7x|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5x|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.x|", 0));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.x|", 0));
	printf(" (%d)\n", printf("8.: |%8.x|", 42));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.x|", 42));
	printf(" (%d)\n", printf("08.*(-4): |%08.*x|", -4, 42));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*x|", -4, 42));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17x|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17x|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17x|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20x|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18x|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15x|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15x|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Basic base calculation tests"));
	ft_printf(" (%d)\n", ft_printf("Basic base calculation tests"));
	printf("\n");

	val = 42;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = 15;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));	
	val = 16;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = 185334478;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = -1;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = 4294967295;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = -4294967295;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = 0;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	val = 2457;
	printf(" (%d)\n", printf("Ya basic: |%x|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%x|", val));
	printf("\n");

	

	if(broken)
	{
	printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
	printf("\n");
	ft_printf("This is an incomplete ft_printf conversion: %-0*.*", 13, 7);
	printf("\n");

	printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
	printf("\n");
	ft_printf("This is a bogus ft_printf conversion: %-0*.*b", 13, 7);
	printf("\n");

	printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
	printf("\n");
	ft_printf("This is a bogus ft_printf conversion with double precision: %-0*..*b", 13, 7);
	printf("\n");
	}


	return (0);
}
