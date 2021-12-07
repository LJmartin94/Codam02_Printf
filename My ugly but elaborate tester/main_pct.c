/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_pct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/12 06:21:06 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int		ft_printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	int broken = 0;
	int	bonus = 0;

	printf(" (%d)\n", printf("Handling minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0%|"));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1%|"));
	printf(" (%d)\n", printf("Mfw 0: |%0%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0%|"));
	printf(" (%d)\n", printf("Mfw 1: |%1%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1%|"));
	printf(" (%d)\n", printf("Mfw 2: |%2%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2%|"));
	printf(" (%d)\n", printf("Mfw 3: |%3%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3%|"));
	printf(" (%d)\n", printf("Mfw 4: |%4%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4%|"));
	printf(" (%d)\n", printf("Mfw 5: |%5%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5%|"));
	printf(" (%d)\n", printf("Mfw 10: |%10%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10%|"));
	printf(" (%d)\n", printf("Mfw 15: |%15%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15%|"));
	printf(" (%d)\n", printf("Mfw 42: |%42%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	ft_printf(" (%d)\n", ft_printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0%|"));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1%|"));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2%|"));
	printf(" (%d)\n", printf("Precis. 0: |%.0%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0%|"));
	printf(" (%d)\n", printf("Precis. 1: |%.1%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1%|"));
	printf(" (%d)\n", printf("Precis. 2: |%.2%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2%|"));
	printf(" (%d)\n", printf("Precis. 3: |%.3%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3%|"));
	printf(" (%d)\n", printf("Precis. 4: |%.4%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4%|"));
	printf(" (%d)\n", printf("Precis. 5: |%.5%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5%|"));
	printf(" (%d)\n", printf("Precis. 10: |%.10%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10%|"));
	printf(" (%d)\n", printf("Precis. 15: |%.15%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15%|"));
	printf(" (%d)\n", printf("Precis. 42: |%.42%|"));
	ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42%|"));

	printf(" (%d)\n", printf("(0) P .00: |%.00%|"));
	ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00%|"));
	printf(" (%d)\n", printf("(0) P .01: |%.01%|"));
	ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01%|"));	
	printf(" (%d)\n", printf("P .00: |%.00%|"));
	ft_printf(" (%d)\n", ft_printf("P .00: |%.00%|"));	
	printf(" (%d)\n", printf("P .01: |%.01%|"));
	ft_printf(" (%d)\n", ft_printf("P .01: |%.01%|"));
	printf(" (%d)\n", printf("P .02: |%.02%|"));
	ft_printf(" (%d)\n", ft_printf("P .02: |%.02%|"));
	printf(" (%d)\n", printf("P .03: |%.03%|"));
	ft_printf(" (%d)\n", ft_printf("P .03: |%.03%|"));
	printf(" (%d)\n", printf("P .04: |%.04%|"));
	ft_printf(" (%d)\n", ft_printf("P .04: |%.04%|"));
	printf(" (%d)\n", printf("P .05: |%.05%|"));
	ft_printf(" (%d)\n", ft_printf("P .05: |%.05%|"));
	printf(" (%d)\n", printf("P .010: |%.010%|"));
	ft_printf(" (%d)\n", ft_printf("P .010: |%.010%|"));
	printf(" (%d)\n", printf("P .015: |%.015%|"));
	ft_printf(" (%d)\n", ft_printf("P .015: |%.015%|"));
	printf(" (%d)\n", printf("P .042: |%.042%|"));
	ft_printf(" (%d)\n", ft_printf("P .042: |%.042%|"));

	printf(" (%d)\n", printf("P .007: |%.007%|"));
	ft_printf(" (%d)\n", ft_printf("P .007: |%.007%|"));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007%|"));
	ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007%|"));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0%|"));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0%|"));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0%|"));
	ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0%|"));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1%|"));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1%|"));
	printf(" (%d)\n", printf("0.0: |%0.0%|"));
	ft_printf(" (%d)\n", ft_printf("0.0: |%0.0%|"));
	printf(" (%d)\n", printf("1.1: |%1.1%|"));
	ft_printf(" (%d)\n", ft_printf("1.1: |%1.1%|"));
	printf(" (%d)\n", printf("2.2: |%2.2%|"));
	ft_printf(" (%d)\n", ft_printf("2.2: |%2.2%|"));
	printf(" (%d)\n", printf("3.2: |%3.2%|"));
	ft_printf(" (%d)\n", ft_printf("3.2: |%3.2%|"));
	printf(" (%d)\n", printf("2.3: |%2.3%|"));
	ft_printf(" (%d)\n", ft_printf("2.3: |%2.3%|"));
	printf(" (%d)\n", printf("8.4: |%8.4%|"));
	ft_printf(" (%d)\n", ft_printf("8.4: |%8.4%|"));
	printf(" (%d)\n", printf("4.8: |%4.8%|"));
	ft_printf(" (%d)\n", ft_printf("4.8: |%4.8%|"));
	printf(" (%d)\n", printf("8.8: |%8.8%|"));
	ft_printf(" (%d)\n", ft_printf("8.8: |%8.8%|"));
	printf(" (%d)\n", printf("8.2: |%8.2%|"));
	ft_printf(" (%d)\n", ft_printf("8.2: |%8.2%|"));
	printf(" (%d)\n", printf("2.8: |%2.8%|"));
	ft_printf(" (%d)\n", ft_printf("2.8: |%2.8%|"));
	printf(" (%d)\n", printf("8.1: |%8.1%|"));
	ft_printf(" (%d)\n", ft_printf("8.1: |%8.1%|"));
	printf(" (%d)\n", printf("1.8: |%1.8%|"));
	ft_printf(" (%d)\n", ft_printf("1.8: |%1.8%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0%|"));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0%|"));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1%|"));
	printf(" (%d)\n", printf("01.1: |%01.1%|"));
	ft_printf(" (%d)\n", ft_printf("01.1: |%01.1%|"));
	printf(" (%d)\n", printf("02.2: |%02.2%|"));
	ft_printf(" (%d)\n", ft_printf("02.2: |%02.2%|"));
	printf(" (%d)\n", printf("03.2: |%03.2%|"));
	ft_printf(" (%d)\n", ft_printf("03.2: |%03.2%|"));
	printf(" (%d)\n", printf("02.3: |%02.3%|"));
	ft_printf(" (%d)\n", ft_printf("02.3: |%02.3%|"));
	printf(" (%d)\n", printf("08.4: |%08.4%|"));
	ft_printf(" (%d)\n", ft_printf("08.4: |%08.4%|"));
	printf(" (%d)\n", printf("04.8: |%04.8%|"));
	ft_printf(" (%d)\n", ft_printf("04.8: |%04.8%|"));
	printf(" (%d)\n", printf("08.8: |%08.8%|"));
	ft_printf(" (%d)\n", ft_printf("08.8: |%08.8%|"));
	printf(" (%d)\n", printf("08.2: |%08.2%|"));
	ft_printf(" (%d)\n", ft_printf("08.2: |%08.2%|"));
	printf(" (%d)\n", printf("02.8: |%02.8%|"));
	ft_printf(" (%d)\n", ft_printf("02.8: |%02.8%|"));
	printf(" (%d)\n", printf("08.1: |%08.1%|"));
	ft_printf(" (%d)\n", ft_printf("08.1: |%08.1%|"));
	printf(" (%d)\n", printf("01.8: |%01.8%|"));
	ft_printf(" (%d)\n", ft_printf("01.8: |%01.8%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 0: |%0%|"));
	printf(" (%d)\n", printf("(0) 00: |%00%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 00: |%00%|"));
	printf(" (%d)\n", printf("(0) 01: |%01%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 01: |%01%|"));
	printf(" (%d)\n", printf("(0) 02: |%02%|"));
	ft_printf(" (%d)\n", ft_printf("(0) 02: |%02%|"));
	printf(" (%d)\n", printf("0: |%0%|"));
	ft_printf(" (%d)\n", ft_printf("0: |%0%|"));
	printf(" (%d)\n", printf("00: |%00%|"));
	ft_printf(" (%d)\n", ft_printf("00: |%00%|"));
	printf(" (%d)\n", printf("01: |%01%|"));
	ft_printf(" (%d)\n", ft_printf("01: |%01%|"));
	printf(" (%d)\n", printf("02: |%02%|"));
	ft_printf(" (%d)\n", ft_printf("02: |%02%|"));
	printf(" (%d)\n", printf("03: |%03%|"));
	ft_printf(" (%d)\n", ft_printf("03: |%03%|"));
	printf(" (%d)\n", printf("08: |%08%|"));
	ft_printf(" (%d)\n", ft_printf("08: |%08%|"));
	printf(" (%d)\n", printf("000000000008: |%000000000008%|"));
	ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008%|"));
	printf(" (%d)\n", printf("010: |%010%|"));
	ft_printf(" (%d)\n", ft_printf("010: |%010%|"));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010%|"));
	ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0%|"));
	printf(" (%d)\n", printf("(0) -00: |%-00%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00%|"));
	printf(" (%d)\n", printf("(0) -01: |%-01%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01%|"));
	printf(" (%d)\n", printf("(0) -02: |%-02%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02%|"));

	printf(" (%d)\n", printf("-0: |%-0%|"));
	ft_printf(" (%d)\n", ft_printf("-0: |%-0%|"));
	printf(" (%d)\n", printf("-00: |%-00%|"));
	ft_printf(" (%d)\n", ft_printf("-00: |%-00%|"));
	printf(" (%d)\n", printf("-01: |%-01%|"));
	ft_printf(" (%d)\n", ft_printf("-01: |%-01%|"));
	printf(" (%d)\n", printf("-02: |%-02%|"));
	ft_printf(" (%d)\n", ft_printf("-02: |%-02%|"));
	printf(" (%d)\n", printf("-03: |%-03%|"));
	ft_printf(" (%d)\n", ft_printf("-03: |%-03%|"));
	printf(" (%d)\n", printf("-08: |%-08%|"));
	ft_printf(" (%d)\n", ft_printf("-08: |%-08%|"));
	printf(" (%d)\n", printf("0-8: |%0-8%|"));
	ft_printf(" (%d)\n", ft_printf("0-8: |%0-8%|"));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008%|"));
	ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008%|"));
	printf(" (%d)\n", printf("-010: |%-010%|"));
	ft_printf(" (%d)\n", ft_printf("-010: |%-010%|"));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010%|"));
	ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010%|"));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0%|"));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1%|"));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2%|"));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2%|"));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0%|"));
	printf(" (%d)\n", printf("Mfw -1: |%-1%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1%|"));
	printf(" (%d)\n", printf("Mfw -2: |%-2%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2%|"));
	printf(" (%d)\n", printf("Mfw -3: |%-3%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3%|"));
	printf(" (%d)\n", printf("Mfw -4: |%-4%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4%|"));
	printf(" (%d)\n", printf("Mfw -5: |%-5%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5%|"));
	printf(" (%d)\n", printf("Mfw -10: |%-10%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10%|"));
	printf(" (%d)\n", printf("Mfw --10: |%--10%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10%|"));
	printf(" (%d)\n", printf("Mfw ---10: |%---10%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10%|"));
	printf(" (%d)\n", printf("Mfw -15: |%-15%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15%|"));
	printf(" (%d)\n", printf("Mfw -42: |%-42%|"));
	ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0%|"));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1%|"));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0%|"));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1%|"));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2%|"));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0%|"));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2%|"));
	ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2%|"));


	printf(" (%d)\n", printf("-0.0: |%-0.0%|"));
	ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0%|"));
	printf(" (%d)\n", printf("-0.1: |%-0.1%|"));
	ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1%|"));
	printf(" (%d)\n", printf("-1.0: |%-1.0%|"));
	ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0%|"));
	printf(" (%d)\n", printf("-1.1: |%-1.1%|"));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1%|"));
	printf(" (%d)\n", printf("-0.2: |%-0.2%|"));
	ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2%|"));
	printf(" (%d)\n", printf("-2.0: |%-2.0%|"));
	ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0%|"));
	printf(" (%d)\n", printf("-2.2: |%-2.2%|"));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2%|"));


	printf(" (%d)\n", printf("-1.1: |%-1.1%|"));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1%|"));
	printf(" (%d)\n", printf("-2.2: |%-2.2%|"));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2%|"));
	printf(" (%d)\n", printf("-3.2: |%-3.2%|"));
	ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2%|"));
	printf(" (%d)\n", printf("-2.3: |%-2.3%|"));
	ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3%|"));
	printf(" (%d)\n", printf("-8.4: |%-8.4%|"));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4%|"));
	printf(" (%d)\n", printf("-4.8: |%-4.8%|"));
	ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8%|"));
	printf(" (%d)\n", printf("-8.8: |%-8.8%|"));
	ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8%|"));
	printf(" (%d)\n", printf("-8.2: |%-8.2%|"));
	ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2%|"));
	printf(" (%d)\n", printf("-2.8: |%-2.8%|"));
	ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8%|"));
	printf(" (%d)\n", printf("-8.1: |%-8.1%|"));
	ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1%|"));
	printf(" (%d)\n", printf("-1.8: |%-1.8%|"));
	ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8%|"));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*%|", 1));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*%|", 1));
	printf(" (%d)\n", printf("Mfw *5: |%*%|", 5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	printf(" (%d)\n", printf("Mfw *5: |%*%|",5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	printf(" (%d)\n", printf("Mfw *5: |%*%|",        5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|",        5));
	printf(" (%d)\n", printf("Mfw *10: |%*%|", 10));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*%|", 10));
	// printf(" (%d)\n", printf("Mfw *i: |%*%|"));
	// ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*%|"));
	printf(" (%d)\n", printf("Mfw **5: |%*.*%|", 5, 6));
	ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*%|", 5, 6));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*%|", 1));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*%|", 1));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|", 5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|", 5));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|",5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",5));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|",      5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",      5));
	printf(" (%d)\n", printf("Precis. .*10: |%.*%|", 10));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*%|", 10));
	// printf(" (%d)\n", printf("Precis. .*i: |%.*%|"));
	// ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*%|"));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*%|", 0));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*%|", 0));
	printf(" (%d)\n", printf("P .*01: |%.*%|", 01));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*%|", 01));
	printf(" (%d)\n", printf("P .*05: |%.*%|", 05));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*%|", 05));
	printf(" (%d)\n", printf("P .*010: |%.*%|", 010));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*%|", 010));
	printf(" (%d)\n", printf("P .*000000000007: |%.*%|", 000000000007));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*%|", 000000000007));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4%|", 8));
	printf(" (%d)\n", printf("*4.8: |%*.8%|", 4));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8%|", 4));
	printf(" (%d)\n", printf("*8.8: |%*.8%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8%|", 8));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*%|", 4));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*%|", 4));
	printf(" (%d)\n", printf("4.*8: |%4.*%|", 8));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*%|", 8));
	printf(" (%d)\n", printf("8.*8: |%8.*%|", 8));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*%|", 8));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*%|", 8, 4));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*%|", 8, 4));
	printf(" (%d)\n", printf("*4.*8: |%*.*%|", 4, 8));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*%|", 4, 8));
	printf(" (%d)\n", printf("*8.*8: |%*.*%|", 8, 8));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*%|", 8, 8));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*%|", 010, 4));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*%|", 010, 4));
	printf(" (%d)\n", printf(" *07.*4: |%*.*%|", 07, 4));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*%|", 07, 4));
	printf(" (%d)\n", printf("*4.*010: |%*.*%|", 4, 010));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*%|", 4, 010));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*%|", 0x10, 4));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*%|", 0x10, 4));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*%|", 4, 0x10));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*%|", 4, 0x10));
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

	printf(" (%d)\n", printf("*8: |%*%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8: |%*%|", 8));
	printf(" (%d)\n", printf("0*8: |%0*%|", 8));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*%|", 8));
	printf(" (%d)\n", printf("00*8: |%00*%|", 8));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*%|", 8));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*%|", 8));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*%|", 8));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*%|", 0));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*%|", 0));
	printf(" (%d)\n", printf("-0*0: |%-0*%|", 0));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*%|", 0));
	printf(" (%d)\n", printf("-0*3: |%-0*%|", 3));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*%|", 3));
	printf(" (%d)\n", printf("*(-03): |%*%|", -03));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*%|", -03));
	printf(" (%d)\n", printf("*(-5): |%*%|", -5));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*%|", -5));
	printf(" (%d)\n", printf("*(5): |%*%|", 5));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*%|", 5));
	printf(" (%d)\n", printf("-*(5): |%-*%|", 5));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*%|", 5));
	printf(" (%d)\n", printf("-8.4: |%-8.4%|"));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4%|"));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4%|", 8));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4%|", 8));
	printf(" (%d)\n", printf("*(-8).4: |%*.4%|", -8));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4%|", -8));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*%|", ((int)(-8.4))));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*%|", ((int)(-8.4))));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*%|", 4));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*%|", 4));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*%|", -4));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*%|", -4));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*%|", 0));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*%|", 0));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*%|", 1));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*%|", 1));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4%|", 0));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4%|", 0));
	printf(" (%d)\n", printf("*(0).4: |%*.4%|", 0));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4%|", 0));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*%|", 1));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*%|", 1));
	printf(" (%d)\n", printf("Mfw *5: |%*%|", 5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	printf(" (%d)\n", printf("Mfw *5: |%*%|",5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|", 5));
	printf(" (%d)\n", printf("Mfw *5: |%*%|",        5));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*%|",        5));
	printf(" (%d)\n", printf("Mfw *10: |%*%|", 10));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*%|", 10));
	printf(" (%d)\n", printf("Mfw *i: |%*%|", 0));
	ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*%|", 0));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*%|", 1));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*%|", 1));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|", 5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|", 5));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|",5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",5));
	printf(" (%d)\n", printf("Precis. .*5: |%.*%|",      5));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*%|",      5));
	printf(" (%d)\n", printf("Precis. .*10: |%.*%|", 10));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*%|", 10));
	printf(" (%d)\n", printf("Precis. .*i: |%.*%|", 0));
	ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*%|", 0));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*%|", 0));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*%|", 0));
	printf(" (%d)\n", printf("P .*01: |%.*%|", 01));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*%|", 01));
	printf(" (%d)\n", printf("P .*05: |%.*%|", 05));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*%|", 05));
	printf(" (%d)\n", printf("P .*010: |%.*%|", 010));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*%|", 010));
	printf(" (%d)\n", printf("P .*000000000007: |%.*%|", 000000000007));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*%|", 000000000007));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4%|", 8));
	printf(" (%d)\n", printf("*4.8: |%*.8%|", 4));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8%|", 4));
	printf(" (%d)\n", printf("*8.8: |%*.8%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8%|", 8));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*%|", 4));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*%|", 4));
	printf(" (%d)\n", printf("4.*8: |%4.*%|", 8));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*%|", 8));
	printf(" (%d)\n", printf("8.*8: |%8.*%|", 8));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*%|", 8));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*%|", 8, 4));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*%|", 8, 4));
	printf(" (%d)\n", printf("*4.*8: |%*.*%|", 4, 8));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*%|", 4, 8));
	printf(" (%d)\n", printf("*8.*8: |%*.*%|", 8, 8));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*%|", 8, 8));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*%|", 010, 4));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*%|", 010, 4));
	printf(" (%d)\n", printf(" *07.*4: |%*.*%|", 07, 4));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*%|", 07, 4));
	printf(" (%d)\n", printf("*4.*010: |%*.*%|", 4, 010));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*%|", 4, 010));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*%|", 0x10, 4));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*%|", 0x10, 4));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*%|", 0x7, 4));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*%|", 4, 0x10));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*%|", 4, 0x10));
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

	printf(" (%d)\n", printf("*8: |%*%|", 8));
	ft_printf(" (%d)\n", ft_printf("*8: |%*%|", 8));
	printf(" (%d)\n", printf("0*8: |%0*%|", 8));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*%|", 8));
	printf(" (%d)\n", printf("00*8: |%00*%|", 8));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*%|", 8));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*%|", 8));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*%|", 8));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7%|"));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5%|"));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.%|"));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.%|"));
	printf(" (%d)\n", printf("8.: |%8.%|"));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.%|"));
	printf(" (%d)\n", printf("08.*(-4): |%08.*%|", -4));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*%|", -4));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17%|"));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17%|"));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17%|"));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20%|"));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18%|"));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15%|"));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15%|"));
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
