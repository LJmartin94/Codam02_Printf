/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:20:17 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:37:27 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_normalprint(const char *str, int *i, int ret)
{
	while (str[*i] != '%' && str[*i] != '\0')
	{
		write(1, &(str[*i]), 1);
		(*i)++;
		ret++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		ret;
	t_input info;

	va_start(ap, format);
	i = 0;
	ret = 0;
	while (format[i] != '\0')
	{
		ret = ft_normalprint(format, &i, ret);
		if (format[i] == '%')
		{
			info = ft_interpret(ap, format, &i);
			ret = ret + ft_switchboard(ap, info);
		}
	}
	va_end(ap);
	return (ret);
}
