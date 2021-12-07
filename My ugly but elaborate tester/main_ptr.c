/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 02:35:44 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int		ft_printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	// unsigned int val = 42;
	//void	*val = NULL;
	//char	*val = "An example string";
	
	 int		pointed = 867676769;
	 int		*val = &pointed;





	int broken = 0;
	int	bonus = 0;

	printf(" (%d)\n", printf("Handling minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0p|", 0));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1p|", 0));
	printf(" (%d)\n", printf("Mfw 0: |%0p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0p|", val));
	printf(" (%d)\n", printf("Mfw 1: |%1p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1p|", val));
	printf(" (%d)\n", printf("Mfw 2: |%2p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2p|", val));
	printf(" (%d)\n", printf("Mfw 3: |%3p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3p|", val));
	printf(" (%d)\n", printf("Mfw 4: |%4p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4p|", val));
	printf(" (%d)\n", printf("Mfw 5: |%5p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5p|", val));
	printf(" (%d)\n", printf("Mfw 10: |%10p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10p|", val));
	printf(" (%d)\n", printf("Mfw 15: |%15p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15p|", val));
	printf(" (%d)\n", printf("Mfw 42: |%42p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	ft_printf(" (%d)\n", ft_printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0p|", 0));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1p|", 0));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2p|", 0));
	printf(" (%d)\n", printf("Precis. 0: |%.0p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0p|", val));
	printf(" (%d)\n", printf("Precis. 1: |%.1p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1p|", val));
	printf(" (%d)\n", printf("Precis. 2: |%.2p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2p|", val));
	printf(" (%d)\n", printf("Precis. 3: |%.3p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3p|", val));
	printf(" (%d)\n", printf("Precis. 4: |%.4p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4p|", val));
	printf(" (%d)\n", printf("Precis. 5: |%.5p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5p|", val));
	printf(" (%d)\n", printf("Precis. 10: |%.10p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10p|", val));
	printf(" (%d)\n", printf("Precis. 15: |%.15p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15p|", val));
	printf(" (%d)\n", printf("Precis. 42: |%.42p|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42p|", val));

	printf(" (%d)\n", printf("(0) P .00: |%.00p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00p|", 0));
	printf(" (%d)\n", printf("(0) P .01: |%.01p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01p|", 0));	
	printf(" (%d)\n", printf("P .00: |%.00p|", val));
	ft_printf(" (%d)\n", ft_printf("P .00: |%.00p|", val));	
	printf(" (%d)\n", printf("P .01: |%.01p|", val));
	ft_printf(" (%d)\n", ft_printf("P .01: |%.01p|", val));
	printf(" (%d)\n", printf("P .02: |%.02p|", val));
	ft_printf(" (%d)\n", ft_printf("P .02: |%.02p|", val));
	printf(" (%d)\n", printf("P .03: |%.03p|", val));
	ft_printf(" (%d)\n", ft_printf("P .03: |%.03p|", val));
	printf(" (%d)\n", printf("P .04: |%.04p|", val));
	ft_printf(" (%d)\n", ft_printf("P .04: |%.04p|", val));
	printf(" (%d)\n", printf("P .05: |%.05p|", val));
	ft_printf(" (%d)\n", ft_printf("P .05: |%.05p|", val));
	printf(" (%d)\n", printf("P .010: |%.010p|", val));
	ft_printf(" (%d)\n", ft_printf("P .010: |%.010p|", val));
	printf(" (%d)\n", printf("P .015: |%.015p|", val));
	ft_printf(" (%d)\n", ft_printf("P .015: |%.015p|", val));
	printf(" (%d)\n", printf("P .042: |%.042p|", val));
	ft_printf(" (%d)\n", ft_printf("P .042: |%.042p|", val));

	printf(" (%d)\n", printf("P .007: |%.007p|", val));
	ft_printf(" (%d)\n", ft_printf("P .007: |%.007p|", val));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007p|", val));
	ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007p|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0p|", 0));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0p|", 0));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0p|", 10));
	ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0p|", 10));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1p|", 0));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1p|", 0));
	printf(" (%d)\n", printf("0.0: |%0.0p|", val));
	ft_printf(" (%d)\n", ft_printf("0.0: |%0.0p|", val));
	printf(" (%d)\n", printf("1.1: |%1.1p|", val));
	ft_printf(" (%d)\n", ft_printf("1.1: |%1.1p|", val));
	printf(" (%d)\n", printf("2.2: |%2.2p|", val));
	ft_printf(" (%d)\n", ft_printf("2.2: |%2.2p|", val));
	printf(" (%d)\n", printf("3.2: |%3.2p|", val));
	ft_printf(" (%d)\n", ft_printf("3.2: |%3.2p|", val));
	printf(" (%d)\n", printf("2.3: |%2.3p|", val));
	ft_printf(" (%d)\n", ft_printf("2.3: |%2.3p|", val));
	printf(" (%d)\n", printf("8.4: |%8.4p|", val));
	ft_printf(" (%d)\n", ft_printf("8.4: |%8.4p|", val));
	printf(" (%d)\n", printf("4.8: |%4.8p|", val));
	ft_printf(" (%d)\n", ft_printf("4.8: |%4.8p|", val));
	printf(" (%d)\n", printf("8.8: |%8.8p|", val));
	ft_printf(" (%d)\n", ft_printf("8.8: |%8.8p|", val));
	printf(" (%d)\n", printf("8.2: |%8.2p|", val));
	ft_printf(" (%d)\n", ft_printf("8.2: |%8.2p|", val));
	printf(" (%d)\n", printf("2.8: |%2.8p|", val));
	ft_printf(" (%d)\n", ft_printf("2.8: |%2.8p|", val));
	printf(" (%d)\n", printf("8.1: |%8.1p|", val));
	ft_printf(" (%d)\n", ft_printf("8.1: |%8.1p|", val));
	printf(" (%d)\n", printf("1.8: |%1.8p|", val));
	ft_printf(" (%d)\n", ft_printf("1.8: |%1.8p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0p|", 0));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0p|", 0));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1p|", 0));
	printf(" (%d)\n", printf("01.1: |%01.1p|", val));
	ft_printf(" (%d)\n", ft_printf("01.1: |%01.1p|", val));
	printf(" (%d)\n", printf("02.2: |%02.2p|", val));
	ft_printf(" (%d)\n", ft_printf("02.2: |%02.2p|", val));
	printf(" (%d)\n", printf("03.2: |%03.2p|", val));
	ft_printf(" (%d)\n", ft_printf("03.2: |%03.2p|", val));
	printf(" (%d)\n", printf("02.3: |%02.3p|", val));
	ft_printf(" (%d)\n", ft_printf("02.3: |%02.3p|", val));
	printf(" (%d)\n", printf("08.4: |%08.4p|", val));
	ft_printf(" (%d)\n", ft_printf("08.4: |%08.4p|", val));
	printf(" (%d)\n", printf("04.8: |%04.8p|", val));
	ft_printf(" (%d)\n", ft_printf("04.8: |%04.8p|", val));
	printf(" (%d)\n", printf("08.8: |%08.8p|", val));
	ft_printf(" (%d)\n", ft_printf("08.8: |%08.8p|", val));
	printf(" (%d)\n", printf("08.2: |%08.2p|", val));
	ft_printf(" (%d)\n", ft_printf("08.2: |%08.2p|", val));
	printf(" (%d)\n", printf("02.8: |%02.8p|", val));
	ft_printf(" (%d)\n", ft_printf("02.8: |%02.8p|", val));
	printf(" (%d)\n", printf("08.1: |%08.1p|", val));
	ft_printf(" (%d)\n", ft_printf("08.1: |%08.1p|", val));
	printf(" (%d)\n", printf("01.8: |%01.8p|", val));
	ft_printf(" (%d)\n", ft_printf("01.8: |%01.8p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 0: |%0p|", 0));
	printf(" (%d)\n", printf("(0) 00: |%00p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 00: |%00p|", 0));
	printf(" (%d)\n", printf("(0) 01: |%01p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 01: |%01p|", 0));
	printf(" (%d)\n", printf("(0) 02: |%02p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) 02: |%02p|", 0));
	printf(" (%d)\n", printf("0: |%0p|", val));
	ft_printf(" (%d)\n", ft_printf("0: |%0p|", val));
	printf(" (%d)\n", printf("00: |%00p|", val));
	ft_printf(" (%d)\n", ft_printf("00: |%00p|", val));
	printf(" (%d)\n", printf("01: |%01p|", val));
	ft_printf(" (%d)\n", ft_printf("01: |%01p|", val));
	printf(" (%d)\n", printf("02: |%02p|", val));
	ft_printf(" (%d)\n", ft_printf("02: |%02p|", val));
	printf(" (%d)\n", printf("03: |%03p|", val));
	ft_printf(" (%d)\n", ft_printf("03: |%03p|", val));
	printf(" (%d)\n", printf("08: |%08p|", val));
	ft_printf(" (%d)\n", ft_printf("08: |%08p|", val));
	printf(" (%d)\n", printf("000000000008: |%000000000008p|", val));
	ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008p|", val));
	printf(" (%d)\n", printf("010: |%010p|", val));
	ft_printf(" (%d)\n", ft_printf("010: |%010p|", val));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010p|", val));
	ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0p|", 0));
	printf(" (%d)\n", printf("(0) -00: |%-00p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00p|", 0));
	printf(" (%d)\n", printf("(0) -01: |%-01p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01p|", 0));
	printf(" (%d)\n", printf("(0) -02: |%-02p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02p|", 0));

	printf(" (%d)\n", printf("-0: |%-0p|", val));
	ft_printf(" (%d)\n", ft_printf("-0: |%-0p|", val));
	printf(" (%d)\n", printf("-00: |%-00p|", val));
	ft_printf(" (%d)\n", ft_printf("-00: |%-00p|", val));
	printf(" (%d)\n", printf("-01: |%-01p|", val));
	ft_printf(" (%d)\n", ft_printf("-01: |%-01p|", val));
	printf(" (%d)\n", printf("-02: |%-02p|", val));
	ft_printf(" (%d)\n", ft_printf("-02: |%-02p|", val));
	printf(" (%d)\n", printf("-03: |%-03p|", val));
	ft_printf(" (%d)\n", ft_printf("-03: |%-03p|", val));
	printf(" (%d)\n", printf("-08: |%-08p|", val));
	ft_printf(" (%d)\n", ft_printf("-08: |%-08p|", val));
	printf(" (%d)\n", printf("0-8: |%0-8p|", val));
	ft_printf(" (%d)\n", ft_printf("0-8: |%0-8p|", val));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008p|", val));
	ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008p|", val));
	printf(" (%d)\n", printf("-010: |%-010p|", val));
	ft_printf(" (%d)\n", ft_printf("-010: |%-010p|", val));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010p|", val));
	ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010p|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0p|", 0));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1p|", 0));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2p|", 0));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0p|", val));
	printf(" (%d)\n", printf("Mfw -1: |%-1p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1p|", val));
	printf(" (%d)\n", printf("Mfw -2: |%-2p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2p|", val));
	printf(" (%d)\n", printf("Mfw -3: |%-3p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3p|", val));
	printf(" (%d)\n", printf("Mfw -4: |%-4p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4p|", val));
	printf(" (%d)\n", printf("Mfw -5: |%-5p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5p|", val));
	printf(" (%d)\n", printf("Mfw -10: |%-10p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10p|", val));
	printf(" (%d)\n", printf("Mfw --10: |%--10p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10p|", val));
	printf(" (%d)\n", printf("Mfw ---10: |%---10p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10p|", val));
	printf(" (%d)\n", printf("Mfw -15: |%-15p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15p|", val));
	printf(" (%d)\n", printf("Mfw -42: |%-42p|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0p|", 0));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1p|", 0));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0p|", 0));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1p|", 0));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2p|", 0));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0p|", 0));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2p|", 0));
	ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2p|", 0));


	printf(" (%d)\n", printf("-0.0: |%-0.0p|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0p|", 5));
	printf(" (%d)\n", printf("-0.1: |%-0.1p|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1p|", 5));
	printf(" (%d)\n", printf("-1.0: |%-1.0p|", 5));
	ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0p|", 5));
	printf(" (%d)\n", printf("-1.1: |%-1.1p|", 5));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1p|", 5));
	printf(" (%d)\n", printf("-0.2: |%-0.2p|", 5));
	ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2p|", 5));
	printf(" (%d)\n", printf("-2.0: |%-2.0p|", 5));
	ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0p|", 5));
	printf(" (%d)\n", printf("-2.2: |%-2.2p|", 5));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2p|", 5));


	printf(" (%d)\n", printf("-1.1: |%-1.1p|", val));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1p|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2p|", val));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2p|", val));
	printf(" (%d)\n", printf("-3.2: |%-3.2p|", val));
	ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2p|", val));
	printf(" (%d)\n", printf("-2.3: |%-2.3p|", val));
	ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3p|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4p|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", val));
	printf(" (%d)\n", printf("-4.8: |%-4.8p|", val));
	ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8p|", val));
	printf(" (%d)\n", printf("-8.8: |%-8.8p|", val));
	ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8p|", val));
	printf(" (%d)\n", printf("-8.2: |%-8.2p|", val));
	ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2p|", val));
	printf(" (%d)\n", printf("-2.8: |%-2.8p|", val));
	ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8p|", val));
	printf(" (%d)\n", printf("-8.1: |%-8.1p|", val));
	ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1p|", val));
	printf(" (%d)\n", printf("-1.8: |%-1.8p|", val));
	ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8p|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*p|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*p|", 1, val));
	printf(" (%d)\n", printf("Mfw *5: |%*p|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*p|",5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*p|",        5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|",        5, val));
	printf(" (%d)\n", printf("Mfw *10: |%*p|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*p|", 10, val));
	// printf(" (%d)\n", printf("Mfw *i: |%*p|", val, val));
	// ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*p|", val, val));
	printf(" (%d)\n", printf("Mfw **5: |%*.*p|", 5, 6, val));
	ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*p|", 5, 6, val));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*p|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*p|", 1, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|", 5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|",5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|",      5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",      5, val));
	printf(" (%d)\n", printf("Precis. .*10: |%.*p|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*p|", 10, val));
	// printf(" (%d)\n", printf("Precis. .*i: |%.*p|", val, val));
	// ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*p|", val, val));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*p|", 0, val));
	printf(" (%d)\n", printf("P .*01: |%.*p|", 01, val));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*p|", 01, val));
	printf(" (%d)\n", printf("P .*05: |%.*p|", 05, val));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*p|", 05, val));
	printf(" (%d)\n", printf("P .*010: |%.*p|", 010, val));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*p|", 010, val));
	printf(" (%d)\n", printf("P .*000000000007: |%.*p|", 000000000007, val));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*p|", 000000000007, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4p|", 8, val));
	printf(" (%d)\n", printf("*4.8: |%*.8p|", 4, val));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8p|", 4, val));
	printf(" (%d)\n", printf("*8.8: |%*.8p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8p|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*p|", 4, val));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*p|", 4, val));
	printf(" (%d)\n", printf("4.*8: |%4.*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*p|", 8, val));
	printf(" (%d)\n", printf("8.*8: |%8.*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*p|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*p|", 8, 4, val));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*p|", 8, 4, val));
	printf(" (%d)\n", printf("*4.*8: |%*.*p|", 4, 8, val));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*p|", 4, 8, val));
	printf(" (%d)\n", printf("*8.*8: |%*.*p|", 8, 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*p|", 8, 8, val));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*p|", 010, 4, val));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*p|", 010, 4, val));
	printf(" (%d)\n", printf(" *07.*4: |%*.*p|", 07, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*p|", 07, 4, val));
	printf(" (%d)\n", printf("*4.*010: |%*.*p|", 4, 010, val));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*p|", 4, 010, val));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*p|", 0x10, 4, val));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*p|", 0x10, 4, val));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*p|", 0x7, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*p|", 0x7, 4, val));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*p|", 4, 0x10, val));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*p|", 4, 0x10, val));
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

	printf(" (%d)\n", printf("*8: |%*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8: |%*p|", 8, val));
	printf(" (%d)\n", printf("0*8: |%0*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*p|", 8, val));
	printf(" (%d)\n", printf("00*8: |%00*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*p|", 8, val));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*p|", 8, val));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*p|", 0, val));
	printf(" (%d)\n", printf("-0*0: |%-0*p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*p|", 0, val));
	printf(" (%d)\n", printf("-0*3: |%-0*p|", 3, val));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*p|", 3, val));
	printf(" (%d)\n", printf("*(-03): |%*p|", -03, val));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*p|", -03, val));
	printf(" (%d)\n", printf("*(-5): |%*p|", -5, val));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*p|", -5, val));
	printf(" (%d)\n", printf("*(5): |%*p|", 5, val));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*p|", 5, val));
	printf(" (%d)\n", printf("-*(5): |%-*p|", 5, val));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*p|", 5, val));
	printf(" (%d)\n", printf("-8.4: |%-8.4p|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", val));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4p|", 8, val));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4p|", 8, val));
	printf(" (%d)\n", printf("*(-8).4: |%*.4p|", -8, val));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4p|", -8, val));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), val));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), val));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*p|", 4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*p|", 4, val));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*p|", -4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*p|", -4, val));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*p|", 0, val));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*p|", 1, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*p|", 1, val));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4p|", 0, val));
	printf(" (%d)\n", printf("*(0).4: |%*.4p|", 0, val));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4p|", 0, val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*p|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*p|", 1, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*p|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*p|",5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|", 5, 0));
	printf(" (%d)\n", printf("Mfw *5: |%*p|",        5, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*p|",        5, 0));
	printf(" (%d)\n", printf("Mfw *10: |%*p|", 10, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*p|", 10, 0));
	printf(" (%d)\n", printf("Mfw *i: |%*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*p|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*p|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*p|", 1, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|", 5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|",5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",5, 0));
	printf(" (%d)\n", printf("Precis. .*5: |%.*p|",      5, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*p|",      5, 0));
	printf(" (%d)\n", printf("Precis. .*10: |%.*p|", 10, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*p|", 10, 0));
	printf(" (%d)\n", printf("Precis. .*i: |%.*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*p|", 0, 0));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*p|", 0, 0));
	printf(" (%d)\n", printf("P .*01: |%.*p|", 01, 0));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*p|", 01, 0));
	printf(" (%d)\n", printf("P .*05: |%.*p|", 05, 0));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*p|", 05, 0));
	printf(" (%d)\n", printf("P .*010: |%.*p|", 010, 0));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*p|", 010, 0));
	printf(" (%d)\n", printf("P .*000000000007: |%.*p|", 000000000007, 0));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*p|", 000000000007, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4p|", 8, 0));
	printf(" (%d)\n", printf("*4.8: |%*.8p|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8p|", 4, 0));
	printf(" (%d)\n", printf("*8.8: |%*.8p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8p|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*p|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*p|", 4, 0));
	printf(" (%d)\n", printf("4.*8: |%4.*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*p|", 8, 0));
	printf(" (%d)\n", printf("8.*8: |%8.*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*p|", 8, 0));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*p|", 8, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*p|", 8, 4, 0));
	printf(" (%d)\n", printf("*4.*8: |%*.*p|", 4, 8, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*p|", 4, 8, 0));
	printf(" (%d)\n", printf("*8.*8: |%*.*p|", 8, 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*p|", 8, 8, 0));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*p|", 010, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*p|", 010, 4, 0));
	printf(" (%d)\n", printf(" *07.*4: |%*.*p|", 07, 4, 0));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*p|", 07, 4, 0));
	printf(" (%d)\n", printf("*4.*010: |%*.*p|", 4, 010, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*p|", 4, 010, 0));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*p|", 0x10, 4, 0));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*p|", 0x10, 4, 0));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*p|", 0x7, 4, 0));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*p|", 0x7, 4, 0));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*p|", 4, 0x10, 0));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*p|", 4, 0x10, 0));
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

	printf(" (%d)\n", printf("*8: |%*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("*8: |%*p|", 8, 0));
	printf(" (%d)\n", printf("0*8: |%0*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*p|", 8, 0));
	printf(" (%d)\n", printf("00*8: |%00*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*p|", 8, 0));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*p|", 8, 0));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*p|", 0, 0));
	printf(" (%d)\n", printf("-0*0: |%-0*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*p|", 0, 0));
	printf(" (%d)\n", printf("-0*3: |%-0*p|", 3, 0));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*p|", 3, 0));
	printf(" (%d)\n", printf("*(-03): |%*p|", -03, 0));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*p|", -03, 0));
	printf(" (%d)\n", printf("*(-5): |%*p|", -5, 0));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*p|", -5, 0));
	printf(" (%d)\n", printf("*(5): |%*p|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*p|", 5, 0));
	printf(" (%d)\n", printf("-*(5): |%-*p|", 5, 0));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*p|", 5, 0));
	printf(" (%d)\n", printf("-8.4: |%-8.4p|", 0));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4p|", 0));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4p|", 8, 0));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4p|", 8, 0));
	printf(" (%d)\n", printf("*(-8).4: |%*.4p|", -8, 0));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4p|", -8, 0));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), 0));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*p|", ((int)(-8.4)), 0));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*p|", 4, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*p|", 4, 0));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*p|", -4, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*p|", -4, 0));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*p|", 0, 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*p|", 1, 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*p|", 1, 0));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4p|", 0, 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4p|", 0, 0));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4p|", 0, 0));


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7p|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5p|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.p|", 0));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.p|", 0));
	printf(" (%d)\n", printf("8.: |%8.p|", 42));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.p|", 42));
	printf(" (%d)\n", printf("08.*(-4): |%08.*p|", -4, 42));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*p|", -4, 42));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17p|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17p|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17p|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20p|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18p|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15p|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15p|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Basic base calculation tests"));
	ft_printf(" (%d)\n", ft_printf("Basic base calculation tests"));
	printf("\n");

	val = 42;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = 15;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));	
	val = 16;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = 185334478;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = -1;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = 4294967295;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = -4294967295;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = 0;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	val = 2457;
	printf(" (%d)\n", printf("Ya basic: |%p|", val));
	ft_printf(" (%d)\n", ft_printf("Ya basic: |%p|", val));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE EVEN BIGGER DIGITS AND I CANNOT LIE"));
	ft_printf(" (%d)\n", ft_printf("I LIKE EVEN BIGGER DIGITS AND I CANNOT LIE"));
	printf("\n");

	unsigned long BIGGG = 0;
	BIGGG = BIGGG - 1;

	void *BIG = 0;
	while ((BIG + 1) > BIG)
	{
		BIG = BIG + BIGGG;
		printf("%p\n", BIG);
	}
		// BIG = BIG + 1;
		// printf("%p\n", BIG);

		//this is just proof that the below number, e.g. unsigned long MAX, is the largest address that a 
		//'void *' pointer can hold. Uncomment the above to see that going one higher resets the value to zero

	printf(" (%d)\n", printf("Sometimes it be like that: -028.27i |%-028.27p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -028.27i |%-028.27p|", BIG));
	printf(" (%i)\n", printf("Sometimes it be like that: -028.30i |%-028.30p|", BIG));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -028.30i |%-028.30p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -28.27i |%-28.27p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28.27i |%-28.27p|", BIG));
	printf(" (%i)\n", printf("Sometimes it be like that: -28.30i |%-28.30p|", BIG));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -28.30i |%-28.30p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 28.27i |%28.27p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28.27i |%28.27p|", BIG));
	printf(" (%i)\n", printf("Sometimes it be like that: 28.30i |%28.30p|", BIG));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 28.30i |%28.30p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 028i |%028p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 028i |%028p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 28i |%28p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28i |%28p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 28.25i |%28.25p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 28.25i |%28.25p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -28i |%-28p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28i |%-28p|", BIG));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -28.25i |%-28.25p|", BIG));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -28.25i |%-28.25p|", BIG));
	printf("\n");
	

	// if(broken)
	// {
	// printf("This is an incomplete    printf conversion: %-0*.*", 13, 7);
	// printf("\n");
	// ft_printf("This is an incomplete ft_printf conversion: %-0*.*", 13, 7);
	// printf("\n");

	// printf("This is a bogus    printf conversion: %-0*.*b", 13, 7);
	// printf("\n");
	// ft_printf("This is a bogus ft_printf conversion: %-0*.*b", 13, 7);
	// printf("\n");

	// printf("This is a bogus    printf conversion with double precision: %-0*..*b", 13, 7);
	// printf("\n");
	// ft_printf("This is a bogus ft_printf conversion with double precision: %-0*..*b", 13, 7);
	// printf("\n");
	// }


	return (0);
}
