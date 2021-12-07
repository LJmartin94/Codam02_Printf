/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:45:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 01:05:37 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"

// int		ft_printf(const char *format, ...)
// {
// 	return 0;
// }


int		main(void)
{
	//char	*val = "This is a string of a decent length which is why it is rambling on. END!";
	//char	*val = "";
	// char	*val = "123456789ABCDEFGHIJK"; //20 length string, not counting null
	// char	*val = "123456789ABCDEFGHIJ"; //19 length string, not counting null
	// char	*val = "123456789ABCDEFGHI"; //18 length string, not counting null
	// char	*val = "123456789ABCDEFGH"; //17 length string, not counting null
	// char	*val = "123456789ABCDEFG"; //16 length string, not counting null
	// char	*val = "123456789ABCDEF"; //15 length string, not counting null
	// char	*val = "123456789ABCDE"; //14 length string, not counting null
	char	*val = "123456789ABCD"; //13 length string, not counting null
	// char	*val = "123456789ABC"; //12 length string, not counting null
	// char	*val = "123456789AB"; //11 length string, not counting null
	// char	*val = "123456789A"; //10 length string, not counting null
	// char	*val = "123456789"; //9 length string, not counting null
	// char	*val = "12345678"; //8 length string, not counting null
	// char	*val = "1234567"; //7 length string, not counting null
	// char	*val = "123456"; //6 length string, not counting null
	// char	*val = "12345"; //5 length string, not counting null
	// char	*val = "123"; //3 length string, not counting null
	// char	*val = "0"; //1 length string, not counting null

	int broken = 0;
	int	bonus = 0;

	printf(" (%d)\n", printf("Handling minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width"));

	printf(" (%d)\n", printf("(0) Mfw 0: |%0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 0: |%0s|", NULL));
	printf(" (%d)\n", printf("(0) Mfw 1: |%1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw 1: |%1s|", NULL));
	printf(" (%d)\n", printf("Mfw 0: |%0s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 0: |%0s|", val));
	printf(" (%d)\n", printf("Mfw 1: |%1s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 1: |%1s|", val));
	printf(" (%d)\n", printf("Mfw 2: |%2s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 2: |%2s|", val));
	printf(" (%d)\n", printf("Mfw 3: |%3s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 3: |%3s|", val));
	printf(" (%d)\n", printf("Mfw 4: |%4s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 4: |%4s|", val));
	printf(" (%d)\n", printf("Mfw 5: |%5s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 5: |%5s|", val));
	printf(" (%d)\n", printf("Mfw 10: |%10s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 10: |%10s|", val));
	printf(" (%d)\n", printf("Mfw 15: |%15s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 15: |%15s|", val));
	printf(" (%d)\n", printf("Mfw 42: |%42s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw 42: |%42s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision"));
	ft_printf(" (%d)\n", ft_printf("Handling precision"));

	printf(" (%d)\n", printf("(0) Precis. 0: |%.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 0: |%.0s|", NULL));
	printf(" (%d)\n", printf("(0) Precis. 1: |%.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 1: |%.1s|", NULL));
	printf(" (%d)\n", printf("(0) Precis. 2: |%.2s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Precis. 2: |%.2s|", NULL));
	printf(" (%d)\n", printf("Precis. 0: |%.0s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 0: |%.0s|", val));
	printf(" (%d)\n", printf("Precis. 1: |%.1s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 1: |%.1s|", val));
	printf(" (%d)\n", printf("Precis. 2: |%.2s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 2: |%.2s|", val));
	printf(" (%d)\n", printf("Precis. 3: |%.3s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 3: |%.3s|", val));
	printf(" (%d)\n", printf("Precis. 4: |%.4s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 4: |%.4s|", val));
	printf(" (%d)\n", printf("Precis. 5: |%.5s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 5: |%.5s|", val));
	printf(" (%d)\n", printf("Precis. 10: |%.10s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 10: |%.10s|", val));
	printf(" (%d)\n", printf("Precis. 15: |%.15s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 15: |%.15s|", val));
	printf(" (%d)\n", printf("Precis. 42: |%.42s|", val));
	ft_printf(" (%d)\n", ft_printf("Precis. 42: |%.42s|", val));

	printf(" (%d)\n", printf("(0) P .00: |%.00s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) P .00: |%.00s|", NULL));
	printf(" (%d)\n", printf("(0) P .01: |%.01s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) P .01: |%.01s|", NULL));	
	printf(" (%d)\n", printf("P .00: |%.00s|", val));
	ft_printf(" (%d)\n", ft_printf("P .00: |%.00s|", val));	
	printf(" (%d)\n", printf("P .01: |%.01s|", val));
	ft_printf(" (%d)\n", ft_printf("P .01: |%.01s|", val));
	printf(" (%d)\n", printf("P .02: |%.02s|", val));
	ft_printf(" (%d)\n", ft_printf("P .02: |%.02s|", val));
	printf(" (%d)\n", printf("P .03: |%.03s|", val));
	ft_printf(" (%d)\n", ft_printf("P .03: |%.03s|", val));
	printf(" (%d)\n", printf("P .04: |%.04s|", val));
	ft_printf(" (%d)\n", ft_printf("P .04: |%.04s|", val));
	printf(" (%d)\n", printf("P .05: |%.05s|", val));
	ft_printf(" (%d)\n", ft_printf("P .05: |%.05s|", val));
	printf(" (%d)\n", printf("P .010: |%.010s|", val));
	ft_printf(" (%d)\n", ft_printf("P .010: |%.010s|", val));
	printf(" (%d)\n", printf("P .015: |%.015s|", val));
	ft_printf(" (%d)\n", ft_printf("P .015: |%.015s|", val));
	printf(" (%d)\n", printf("P .042: |%.042s|", val));
	ft_printf(" (%d)\n", ft_printf("P .042: |%.042s|", val));

	printf(" (%d)\n", printf("P .007: |%.007s|", val));
	ft_printf(" (%d)\n", ft_printf("P .007: |%.007s|", val));
	printf(" (%d)\n", printf("P .000000000007: |%.000000000007s|", val));
	ft_printf(" (%d)\n", ft_printf("P .000000000007: |%.000000000007s|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width"));

	printf(" (%d)\n", printf("(0) 0.0: |%0.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 0.0: |%0.0s|", NULL));
	printf(" (%d)\n", printf("(0) 1.0: |%1.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 1.0: |%1.0s|", NULL));
	printf(" (%d)\n", printf("(10) 1.0: |%1.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(10) 1.0: |%1.0s|", NULL));
	printf(" (%d)\n", printf("(0) 0.1: |%0.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 0.1: |%0.1s|", NULL));
	printf(" (%d)\n", printf("(0) 1.1: |%1.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 1.1: |%1.1s|", NULL));
	printf(" (%d)\n", printf("0.0: |%0.0s|", val));
	ft_printf(" (%d)\n", ft_printf("0.0: |%0.0s|", val));
	printf(" (%d)\n", printf("1.1: |%1.1s|", val));
	ft_printf(" (%d)\n", ft_printf("1.1: |%1.1s|", val));
	printf(" (%d)\n", printf("2.2: |%2.2s|", val));
	ft_printf(" (%d)\n", ft_printf("2.2: |%2.2s|", val));
	printf(" (%d)\n", printf("3.2: |%3.2s|", val));
	ft_printf(" (%d)\n", ft_printf("3.2: |%3.2s|", val));
	printf(" (%d)\n", printf("2.3: |%2.3s|", val));
	ft_printf(" (%d)\n", ft_printf("2.3: |%2.3s|", val));
	printf(" (%d)\n", printf("8.4: |%8.4s|", val));
	ft_printf(" (%d)\n", ft_printf("8.4: |%8.4s|", val));
	printf(" (%d)\n", printf("4.8: |%4.8s|", val));
	ft_printf(" (%d)\n", ft_printf("4.8: |%4.8s|", val));
	printf(" (%d)\n", printf("8.8: |%8.8s|", val));
	ft_printf(" (%d)\n", ft_printf("8.8: |%8.8s|", val));
	printf(" (%d)\n", printf("8.2: |%8.2s|", val));
	ft_printf(" (%d)\n", ft_printf("8.2: |%8.2s|", val));
	printf(" (%d)\n", printf("2.8: |%2.8s|", val));
	ft_printf(" (%d)\n", ft_printf("2.8: |%2.8s|", val));
	printf(" (%d)\n", printf("8.1: |%8.1s|", val));
	ft_printf(" (%d)\n", ft_printf("8.1: |%8.1s|", val));
	printf(" (%d)\n", printf("1.8: |%1.8s|", val));
	ft_printf(" (%d)\n", ft_printf("1.8: |%1.8s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 00.0: |%00.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 00.0: |%00.0s|", NULL));
	printf(" (%d)\n", printf("(0) 01.0: |%01.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 01.0: |%01.0s|", NULL));
	printf(" (%d)\n", printf("(0) 00.1: |%00.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 00.1: |%00.1s|", NULL));
	printf(" (%d)\n", printf("01.1: |%01.1s|", val));
	ft_printf(" (%d)\n", ft_printf("01.1: |%01.1s|", val));
	printf(" (%d)\n", printf("02.2: |%02.2s|", val));
	ft_printf(" (%d)\n", ft_printf("02.2: |%02.2s|", val));
	printf(" (%d)\n", printf("03.2: |%03.2s|", val));
	ft_printf(" (%d)\n", ft_printf("03.2: |%03.2s|", val));
	printf(" (%d)\n", printf("02.3: |%02.3s|", val));
	ft_printf(" (%d)\n", ft_printf("02.3: |%02.3s|", val));
	printf(" (%d)\n", printf("08.4: |%08.4s|", val));
	ft_printf(" (%d)\n", ft_printf("08.4: |%08.4s|", val));
	printf(" (%d)\n", printf("04.8: |%04.8s|", val));
	ft_printf(" (%d)\n", ft_printf("04.8: |%04.8s|", val));
	printf(" (%d)\n", printf("08.8: |%08.8s|", val));
	ft_printf(" (%d)\n", ft_printf("08.8: |%08.8s|", val));
	printf(" (%d)\n", printf("08.2: |%08.2s|", val));
	ft_printf(" (%d)\n", ft_printf("08.2: |%08.2s|", val));
	printf(" (%d)\n", printf("02.8: |%02.8s|", val));
	ft_printf(" (%d)\n", ft_printf("02.8: |%02.8s|", val));
	printf(" (%d)\n", printf("08.1: |%08.1s|", val));
	ft_printf(" (%d)\n", ft_printf("08.1: |%08.1s|", val));
	printf(" (%d)\n", printf("01.8: |%01.8s|", val));
	ft_printf(" (%d)\n", ft_printf("01.8: |%01.8s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag"));

	printf(" (%d)\n", printf("(0) 0: |%0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 0: |%0s|", NULL));
	printf(" (%d)\n", printf("(0) 00: |%00s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 00: |%00s|", NULL));
	printf(" (%d)\n", printf("(0) 01: |%01s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 01: |%01s|", NULL));
	printf(" (%d)\n", printf("(0) 02: |%02s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) 02: |%02s|", NULL));
	printf(" (%d)\n", printf("0: |%0s|", val));
	ft_printf(" (%d)\n", ft_printf("0: |%0s|", val));
	printf(" (%d)\n", printf("00: |%00s|", val));
	ft_printf(" (%d)\n", ft_printf("00: |%00s|", val));
	printf(" (%d)\n", printf("01: |%01s|", val));
	ft_printf(" (%d)\n", ft_printf("01: |%01s|", val));
	printf(" (%d)\n", printf("02: |%02s|", val));
	ft_printf(" (%d)\n", ft_printf("02: |%02s|", val));
	printf(" (%d)\n", printf("03: |%03s|", val));
	ft_printf(" (%d)\n", ft_printf("03: |%03s|", val));
	printf(" (%d)\n", printf("08: |%08s|", val));
	ft_printf(" (%d)\n", ft_printf("08: |%08s|", val));
	printf(" (%d)\n", printf("000000000008: |%000000000008s|", val));
	ft_printf(" (%d)\n", ft_printf("000000000008: |%000000000008s|", val));
	printf(" (%d)\n", printf("010: |%010s|", val));
	ft_printf(" (%d)\n", ft_printf("010: |%010s|", val));
	printf(" (%d)\n", printf("0000000000010: |%0000000000010s|", val));
	ft_printf(" (%d)\n", ft_printf("0000000000010: |%0000000000010s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & 0-flag & '-' flag"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & 0-flag & '-' flag"));

	printf(" (%d)\n", printf("(0) -0: |%-0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -0: |%-0s|", NULL));
	printf(" (%d)\n", printf("(0) -00: |%-00s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -00: |%-00s|", NULL));
	printf(" (%d)\n", printf("(0) -01: |%-01s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -01: |%-01s|", NULL));
	printf(" (%d)\n", printf("(0) -02: |%-02s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -02: |%-02s|", NULL));

	printf(" (%d)\n", printf("-0: |%-0s|", val));
	ft_printf(" (%d)\n", ft_printf("-0: |%-0s|", val));
	printf(" (%d)\n", printf("-00: |%-00s|", val));
	ft_printf(" (%d)\n", ft_printf("-00: |%-00s|", val));
	printf(" (%d)\n", printf("-01: |%-01s|", val));
	ft_printf(" (%d)\n", ft_printf("-01: |%-01s|", val));
	printf(" (%d)\n", printf("-02: |%-02s|", val));
	ft_printf(" (%d)\n", ft_printf("-02: |%-02s|", val));
	printf(" (%d)\n", printf("-03: |%-03s|", val));
	ft_printf(" (%d)\n", ft_printf("-03: |%-03s|", val));
	printf(" (%d)\n", printf("-08: |%-08s|", val));
	ft_printf(" (%d)\n", ft_printf("-08: |%-08s|", val));
	printf(" (%d)\n", printf("0-8: |%0-8s|", val));
	ft_printf(" (%d)\n", ft_printf("0-8: |%0-8s|", val));
	printf(" (%d)\n", printf("-000000000008: |%-000000000008s|", val));
	ft_printf(" (%d)\n", ft_printf("-000000000008: |%-000000000008s|", val));
	printf(" (%d)\n", printf("-010: |%-010s|", val));
	ft_printf(" (%d)\n", ft_printf("-010: |%-010s|", val));
	printf(" (%d)\n", printf("-0000000000010: |%-0000000000010s|", val));
	ft_printf(" (%d)\n", ft_printf("-0000000000010: |%-0000000000010s|", val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) Mfw -0: |%-0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -0: |%-0s|", NULL));
	printf(" (%d)\n", printf("(0) Mfw -1: |%-1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -1: |%-1s|", NULL));
	printf(" (%d)\n", printf("(0) Mfw -2: |%-2s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) Mfw -2: |%-2s|", NULL));
	
	printf(" (%d)\n", printf("Mfw -0: |%-0s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -0: |%-0s|", val));
	printf(" (%d)\n", printf("Mfw -1: |%-1s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -1: |%-1s|", val));
	printf(" (%d)\n", printf("Mfw -2: |%-2s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -2: |%-2s|", val));
	printf(" (%d)\n", printf("Mfw -3: |%-3s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -3: |%-3s|", val));
	printf(" (%d)\n", printf("Mfw -4: |%-4s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -4: |%-4s|", val));
	printf(" (%d)\n", printf("Mfw -5: |%-5s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -5: |%-5s|", val));
	printf(" (%d)\n", printf("Mfw -10: |%-10s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -10: |%-10s|", val));
	printf(" (%d)\n", printf("Mfw --10: |%--10s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw --10: |%--10s|", val));
	printf(" (%d)\n", printf("Mfw ---10: |%---10s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw ---10: |%---10s|", val));
	printf(" (%d)\n", printf("Mfw -15: |%-15s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -15: |%-15s|", val));
	printf(" (%d)\n", printf("Mfw -42: |%-42s|", val));
	ft_printf(" (%d)\n", ft_printf("Mfw -42: |%-42s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling precision & minimum field width & left justification"));
	ft_printf(" (%d)\n", ft_printf("Handling precision & minimum field width & left justification"));

	printf(" (%d)\n", printf("(0) -0.0: |%-0.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -0.0: |%-0.0s|", NULL));
	printf(" (%d)\n", printf("(0) -0.1: |%-0.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -0.1: |%-0.1s|", NULL));
	printf(" (%d)\n", printf("(0) -1.0: |%-1.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -1.0: |%-1.0s|", NULL));
	printf(" (%d)\n", printf("(0) -1.1: |%-1.1s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -1.1: |%-1.1s|", NULL));
	printf(" (%d)\n", printf("(0) -0.2: |%-0.2s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -0.2: |%-0.2s|", NULL));
	printf(" (%d)\n", printf("(0) -2.0: |%-2.0s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -2.0: |%-2.0s|", NULL));
	printf(" (%d)\n", printf("(0) -2.2: |%-2.2s|", NULL));
	ft_printf(" (%d)\n", ft_printf("(0) -2.2: |%-2.2s|", NULL));


	printf(" (%d)\n", printf("-0.0: |%-0.0s|", val));
	ft_printf(" (%d)\n", ft_printf("-0.0: |%-0.0s|", val));
	printf(" (%d)\n", printf("-0.1: |%-0.1s|", val));
	ft_printf(" (%d)\n", ft_printf("-0.1: |%-0.1s|", val));
	printf(" (%d)\n", printf("-1.0: |%-1.0s|", val));
	ft_printf(" (%d)\n", ft_printf("-1.0: |%-1.0s|", val));
	printf(" (%d)\n", printf("-1.1: |%-1.1s|", val));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1s|", val));
	printf(" (%d)\n", printf("-0.2: |%-0.2s|", val));
	ft_printf(" (%d)\n", ft_printf("-0.2: |%-0.2s|", val));
	printf(" (%d)\n", printf("-2.0: |%-2.0s|", val));
	ft_printf(" (%d)\n", ft_printf("-2.0: |%-2.0s|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2s|", val));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2s|", val));


	printf(" (%d)\n", printf("-1.1: |%-1.1s|", val));
	ft_printf(" (%d)\n", ft_printf("-1.1: |%-1.1s|", val));
	printf(" (%d)\n", printf("-2.2: |%-2.2s|", val));
	ft_printf(" (%d)\n", ft_printf("-2.2: |%-2.2s|", val));
	printf(" (%d)\n", printf("-3.2: |%-3.2s|", val));
	ft_printf(" (%d)\n", ft_printf("-3.2: |%-3.2s|", val));
	printf(" (%d)\n", printf("-2.3: |%-2.3s|", val));
	ft_printf(" (%d)\n", ft_printf("-2.3: |%-2.3s|", val));
	printf(" (%d)\n", printf("-8.4: |%-8.4s|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4s|", val));
	printf(" (%d)\n", printf("-4.8: |%-4.8s|", val));
	ft_printf(" (%d)\n", ft_printf("-4.8: |%-4.8s|", val));
	printf(" (%d)\n", printf("-8.8: |%-8.8s|", val));
	ft_printf(" (%d)\n", ft_printf("-8.8: |%-8.8s|", val));
	printf(" (%d)\n", printf("-8.2: |%-8.2s|", val));
	ft_printf(" (%d)\n", ft_printf("-8.2: |%-8.2s|", val));
	printf(" (%d)\n", printf("-2.8: |%-2.8s|", val));
	ft_printf(" (%d)\n", ft_printf("-2.8: |%-2.8s|", val));
	printf(" (%d)\n", printf("-8.1: |%-8.1s|", val));
	ft_printf(" (%d)\n", ft_printf("-8.1: |%-8.1s|", val));
	printf(" (%d)\n", printf("-1.8: |%-1.8s|", val));
	ft_printf(" (%d)\n", ft_printf("-1.8: |%-1.8s|", val));

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards"));

	printf(" (%d)\n", printf("Mfw *1: |%*s|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*s|", 1, val));
	printf(" (%d)\n", printf("Mfw *5: |%*s|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*s|",5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|", 5, val));
	printf(" (%d)\n", printf("Mfw *5: |%*s|",        5, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|",        5, val));
	printf(" (%d)\n", printf("Mfw *10: |%*s|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*s|", 10, val));
	// printf(" (%d)\n", printf("Mfw *i: |%*s|", val, val));
	// ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*s|", val, val));
	printf(" (%d)\n", printf("Mfw **5: |%*.*s|", 5, 6, val));
	ft_printf(" (%d)\n", ft_printf("Mfw **5: |%*.*s|", 5, 6, val));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*s|", 1, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*s|", 1, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|", 5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|", 5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|",5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|",5, val));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|",      5, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|",      5, val));
	printf(" (%d)\n", printf("Precis. .*10: |%.*s|", 10, val));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*s|", 10, val));
	// printf(" (%d)\n", printf("Precis. .*i: |%.*s|", val, val));
	// ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*s|", val, val));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*s|", 0, val));
	printf(" (%d)\n", printf("P .*01: |%.*s|", 01, val));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*s|", 01, val));
	printf(" (%d)\n", printf("P .*05: |%.*s|", 05, val));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*s|", 05, val));
	printf(" (%d)\n", printf("P .*010: |%.*s|", 010, val));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*s|", 010, val));
	printf(" (%d)\n", printf("P .*000000000007: |%.*s|", 000000000007, val));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*s|", 000000000007, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4s|", 8, val));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, val));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8s|", 4, val));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8s|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*s|", 4, val));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*s|", 4, val));
	printf(" (%d)\n", printf("4.*8: |%4.*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*s|", 8, val));
	printf(" (%d)\n", printf("8.*8: |%8.*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*s|", 8, val));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, val));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*s|", 8, 4, val));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, val));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*s|", 4, 8, val));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, val));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*s|", 8, 8, val));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*s|", 010, 4, val));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*s|", 010, 4, val));
	printf(" (%d)\n", printf(" *07.*4: |%*.*s|", 07, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*s|", 07, 4, val));
	printf(" (%d)\n", printf("*4.*010: |%*.*s|", 4, 010, val));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*s|", 4, 010, val));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*s|", 0x10, 4, val));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*s|", 0x10, 4, val));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*s|", 0x7, 4, val));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*s|", 0x7, 4, val));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*s|", 4, 0x10, val));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*s|", 4, 0x10, val));
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

	printf(" (%d)\n", printf("*8: |%*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("*8: |%*s|", 8, val));
	printf(" (%d)\n", printf("0*8: |%0*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*s|", 8, val));
	printf(" (%d)\n", printf("00*8: |%00*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*s|", 8, val));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*s|", 8, val));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*s|", 0, val));
	printf(" (%d)\n", printf("-0*0: |%-0*s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*s|", 0, val));
	printf(" (%d)\n", printf("-0*3: |%-0*s|", 3, val));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*s|", 3, val));
	printf(" (%d)\n", printf("*(-03): |%*s|", -03, val));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*s|", -03, val));
	printf(" (%d)\n", printf("*(-5): |%*s|", -5, val));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*s|", -5, val));
	printf(" (%d)\n", printf("*(5): |%*s|", 5, val));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*s|", 5, val));
	printf(" (%d)\n", printf("-*(5): |%-*s|", 5, val));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*s|", 5, val));
	printf(" (%d)\n", printf("-8.4: |%-8.4s|", val));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4s|", val));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4s|", 8, val));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4s|", 8, val));
	printf(" (%d)\n", printf("*(-8).4: |%*.4s|", -8, val));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4s|", -8, val));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*s|", ((int)(-8.4)), val));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*s|", ((int)(-8.4)), val));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*s|", 4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*s|", 4, val));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*s|", -4, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*s|", -4, val));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*s|", 0, val));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*s|", 1, val));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*s|", 1, val));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4s|", 0, val));
	printf(" (%d)\n", printf("*(0).4: |%*.4s|", 0, val));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4s|", 0, val));


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Handling wildcards with 0 as input"));
	ft_printf(" (%d)\n", ft_printf("Handling wildcards with 0 as input"));
	printf("\n");

	printf(" (%d)\n", printf("Mfw *1: |%*s|", 1, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *1: |%*s|", 1, NULL));
	printf(" (%d)\n", printf("Mfw *5: |%*s|", 5, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|", 5, NULL));
	printf(" (%d)\n", printf("Mfw *5: |%*s|",5, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|", 5, NULL));
	printf(" (%d)\n", printf("Mfw *5: |%*s|",        5, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *5: |%*s|",        5, NULL));
	printf(" (%d)\n", printf("Mfw *10: |%*s|", 10, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *10: |%*s|", 10, NULL));
	printf(" (%d)\n", printf("Mfw *i: |%*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("Mfw *i: |%*s|", 0, NULL));
	printf("\n");

	printf(" (%d)\n", printf("Precis. .*1: |%.*s|", 1, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*1: |%.*s|", 1, NULL));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|", 5, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|", 5, NULL));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|",5, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|",5, NULL));
	printf(" (%d)\n", printf("Precis. .*5: |%.*s|",      5, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*5: |%.*s|",      5, NULL));
	printf(" (%d)\n", printf("Precis. .*10: |%.*s|", 10, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*10: |%.*s|", 10, NULL));
	printf(" (%d)\n", printf("Precis. .*i: |%.*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("Precis. .*i: |%.*s|", 0, NULL));
	printf("\n");

	printf(" (%d)\n", printf("P .*0: |%.*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("P .*0: |%.*s|", 0, NULL));
	printf(" (%d)\n", printf("P .*01: |%.*s|", 01, NULL));
	ft_printf(" (%d)\n", ft_printf("P .*01: |%.*s|", 01, NULL));
	printf(" (%d)\n", printf("P .*05: |%.*s|", 05, NULL));
	ft_printf(" (%d)\n", ft_printf("P .*05: |%.*s|", 05, NULL));
	printf(" (%d)\n", printf("P .*010: |%.*s|", 010, NULL));
	ft_printf(" (%d)\n", ft_printf("P .*010: |%.*s|", 010, NULL));
	printf(" (%d)\n", printf("P .*000000000007: |%.*s|", 000000000007, NULL));
	ft_printf(" (%d)\n", ft_printf("P .*000000000007: |%.*s|", 000000000007, NULL));
	printf("\n");

	printf(" (%d)\n", printf("*8.4: |%*.4s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("*8.4: |%*.4s|", 8, NULL));
	printf(" (%d)\n", printf("*4.8: |%*.8s|", 4, NULL));
	ft_printf(" (%d)\n", ft_printf("*4.8: |%*.8s|", 4, NULL));
	printf(" (%d)\n", printf("*8.8: |%*.8s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("*8.8: |%*.8s|", 8, NULL));
	printf("\n");

	printf(" (%d)\n", printf("8.*4: |%8.*s|", 4, NULL));
	ft_printf(" (%d)\n", ft_printf("8.*4: |%8.*s|", 4, NULL));
	printf(" (%d)\n", printf("4.*8: |%4.*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("4.*8: |%4.*s|", 8, NULL));
	printf(" (%d)\n", printf("8.*8: |%8.*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("8.*8: |%8.*s|", 8, NULL));
	printf("\n");

	printf(" (%d)\n", printf("*8.*4: |%*.*s|", 8, 4, NULL));
	ft_printf(" (%d)\n", ft_printf("*8.*4: |%*.*s|", 8, 4, NULL));
	printf(" (%d)\n", printf("*4.*8: |%*.*s|", 4, 8, NULL));
	ft_printf(" (%d)\n", ft_printf("*4.*8: |%*.*s|", 4, 8, NULL));
	printf(" (%d)\n", printf("*8.*8: |%*.*s|", 8, 8, NULL));
	ft_printf(" (%d)\n", ft_printf("*8.*8: |%*.*s|", 8, 8, NULL));
	printf("\n");

	printf("WEIRD OCTAL SHIT:\n");
	printf(" (%d)\n", printf("*010.*4: |%*.*s|", 010, 4, NULL));
	ft_printf(" (%d)\n", ft_printf("*010.*4: |%*.*s|", 010, 4, NULL));
	printf(" (%d)\n", printf(" *07.*4: |%*.*s|", 07, 4, NULL));
	ft_printf(" (%d)\n", ft_printf(" *07.*4: |%*.*s|", 07, 4, NULL));
	printf(" (%d)\n", printf("*4.*010: |%*.*s|", 4, 010, NULL));
	ft_printf(" (%d)\n", ft_printf("*4.*010: |%*.*s|", 4, 010, NULL));
	printf("WEIRD HEXADECIMAL SHIT:\n");
	printf(" (%d)\n", printf("*0x10.*4: |%*.*s|", 0x10, 4, NULL));
	ft_printf(" (%d)\n", ft_printf("*0x10.*4: |%*.*s|", 0x10, 4, NULL));
	printf(" (%d)\n", printf(" *0x7.*4: |%*.*s|", 0x7, 4, NULL));
	ft_printf(" (%d)\n", ft_printf(" *0x7.*4: |%*.*s|", 0x7, 4, NULL));
	printf(" (%d)\n", printf("*4.*0x10: |%*.*s|", 4, 0x10, NULL));
	ft_printf(" (%d)\n", ft_printf("*4.*0x10: |%*.*s|", 4, 0x10, NULL));
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

	printf(" (%d)\n", printf("*8: |%*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("*8: |%*s|", 8, NULL));
	printf(" (%d)\n", printf("0*8: |%0*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("0*8: |%0*s|", 8, NULL));
	printf(" (%d)\n", printf("00*8: |%00*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("00*8: |%00*s|", 8, NULL));
	printf(" (%d)\n", printf("00000000000000000*8: |%00000000000000000*s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("00000000000000000*8: |%00000000000000000*s|", 8, NULL));
	printf("\n");


	printf(" (%d)\n", printf("-*0: |%-*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("-*0: |%-*s|", 0, NULL));
	printf(" (%d)\n", printf("-0*0: |%-0*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("-0*0: |%-0*s|", 0, NULL));
	printf(" (%d)\n", printf("-0*3: |%-0*s|", 3, NULL));
	ft_printf(" (%d)\n", ft_printf("-0*3: |%-0*s|", 3, NULL));
	printf(" (%d)\n", printf("*(-03): |%*s|", -03, NULL));
	ft_printf(" (%d)\n", ft_printf("*(-03): |%*s|", -03, NULL));
	printf(" (%d)\n", printf("*(-5): |%*s|", -5, NULL));
	ft_printf(" (%d)\n", ft_printf("*(-5): |%*s|", -5, NULL));
	printf(" (%d)\n", printf("*(5): |%*s|", 5, NULL));
	ft_printf(" (%d)\n", ft_printf("*(5): |%*s|", 5, NULL));
	printf(" (%d)\n", printf("-*(5): |%-*s|", 5, NULL));
	ft_printf(" (%d)\n", ft_printf("-*(5): |%-*s|", 5, NULL));
	printf(" (%d)\n", printf("-8.4: |%-8.4s|", NULL));
	ft_printf(" (%d)\n", ft_printf("-8.4: |%-8.4s|", NULL));
	printf(" (%d)\n", printf("-*(8).4: |%-*.4s|", 8, NULL));
	ft_printf(" (%d)\n", ft_printf("-*(8).4: |%-*.4s|", 8, NULL));
	printf(" (%d)\n", printf("*(-8).4: |%*.4s|", -8, NULL));
	ft_printf(" (%d)\n", ft_printf("*(-8).4: |%*.4s|", -8, NULL));
	printf(" (%d)\n", printf("*(int)(-8.4): |%*s|", ((int)(-8.4)), NULL));
	ft_printf(" (%d)\n", ft_printf("*(int)(-8.4): |%*s|", ((int)(-8.4)), NULL));
	printf(" (%d)\n", printf("-8.*(4): |%-8.*s|", 4, NULL));
	ft_printf(" (%d)\n", ft_printf("-8.*(4): |%-8.*s|", 4, NULL));
	printf(" (%d)\n", printf("-8.*(-4): |%-8.*s|", -4, NULL));
	ft_printf(" (%d)\n", ft_printf("-8.*(-4): |%-8.*s|", -4, NULL));
	printf(" (%d)\n", printf("-8.*(0): |%-8.*s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("-8.*(0): |%-8.*s|", 0, NULL));
	printf(" (%d)\n", printf("-8.*(1): |%-8.*s|", 1, NULL));
	ft_printf(" (%d)\n", ft_printf("-8.*(1): |%-8.*s|", 1, NULL));
	printf(" (%d)\n", printf("-*(0).4: |%-*.4s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("-*(0).4: |%-*.4s|", 0, NULL));
	printf(" (%d)\n", printf("*(0).4: |%*.4s|", 0, NULL));
	ft_printf(" (%d)\n", ft_printf("*(0).4: |%*.4s|", 0, NULL));


	printf("\n------------------------------------------------------------------------------------------------\n\n");
	
	

	printf(" (%d)\n", printf("Negative ints are a pain:"));
	ft_printf(" (%d)\n", ft_printf("Negative ints are a pain:"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5s|", val));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -08.7i |%-08.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -08.7i |%-08.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -08.10i |%-08.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -08.10i |%-08.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.7i |%-8.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.7i |%-8.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: -8.10i |%-8.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: -8.10i |%-8.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.7i |%8.7s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.7i |%8.7s|", val));
	printf(" (%i)\n", printf("Sometimes it struggles with negative ints: 8.10i |%8.10s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it struggles with negative ints: 8.10i |%8.10s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 08i |%08s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 08i |%08s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8i |%8s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8i |%8s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: 8.5i |%8.5s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: 8.5i |%8.5s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8i |%-8s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8i |%-8s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it struggles with negative ints: -8.5i |%-8.5s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it struggles with negative ints: -8.5i |%-8.5s|", val));
	printf("\n");


	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("Some edge cases I thought of whilst writing:"));
	ft_printf(" (%d)\n", ft_printf("Some edge cases I thought of whilst writing:"));
	printf("\n");

	printf(" (%d)\n", printf("8.: |%8.s|", NULL));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.s|", NULL));
	printf(" (%d)\n", printf("8.: |%8.s|", val));
	ft_printf(" (%d)\n", ft_printf("8.: |%8.s|", val));
	printf(" (%d)\n", printf("08.*(-4): |%08.*s|", -4, val));
	ft_printf(" (%d)\n", ft_printf("08.*(-4): |%08.*s|", -4, val));
	printf("\n");

	printf("\n------------------------------------------------------------------------------------------------\n\n");

	printf(" (%d)\n", printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	ft_printf(" (%d)\n", ft_printf("I LIKE BIG DIGITS AND I CANNOT LIE"));
	printf("\n");


	printf(" (%d)\n", printf("Sometimes it be like that: -018.17i |%-018.17s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -018.17i |%-018.17s|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -018.20i |%-018.20s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -018.20i |%-018.20s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.17i |%-18.17s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.17i |%-18.17s|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: -18.20i |%-18.20s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: -18.20i |%-18.20s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.17i |%18.17s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.17i |%18.17s|", val));
	printf(" (%i)\n", printf("Sometimes it be like that: 18.20i |%18.20s|", val));
	ft_printf(" (%i)\n", ft_printf("Sometimes it be like that: 18.20i |%18.20s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 018i |%018s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 018i |%018s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18i |%18s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18i |%18s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: 18.15i |%18.15s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: 18.15i |%18.15s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18i |%-18s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18i |%-18s|", val));
	printf("\n");

	printf(" (%d)\n", printf("Sometimes it be like that: -18.15i |%-18.15s|", val));
	ft_printf(" (%d)\n", ft_printf("Sometimes it be like that: -18.15i |%-18.15s|", val));
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
