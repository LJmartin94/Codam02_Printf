/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:40:06 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:21:18 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_input	ft_getdtype(const char *str, int *i, t_input info)
{
	info.conv = '\0';
	if (str[*i] == 'c' || str[*i] == 's' || str[*i] == 'p' || str[*i] == 'd'
	|| str[*i] == 'i' || str[*i] == 'u' || str[*i] == 'x' || str[*i] == 'X'
	|| str[*i] == '%')
		info.conv = str[*i];
	if (info.conv != '\0')
		(*i)++;
	return (info);
}

t_input	ft_getprecis(va_list ap, const char *str, int *i, t_input info)
{
	int	wildcard;

	info.prspec = 0;
	info.precis = 0;
	if (str[*i] != '.')
		return (info);
	(*i)++;
	info.prspec = 1;
	wildcard = 0;
	if (str[*i] == '*')
		wildcard = 1;
	while (str[*i] >= '0' && str[*i] <= '9' && wildcard == 0)
	{
		info.precis = (info.precis * 10) + (str[*i] - '0');
		(*i)++;
	}
	if (wildcard == 1)
	{
		info.precis = va_arg(ap, int);
		if (info.precis < 0)
			info.prspec = 0;
		(*i)++;
	}
	return (info);
}

t_input	ft_getmfw(va_list ap, const char *str, int *i, t_input info)
{
	int	wildcard;

	info.mfw = 0;
	wildcard = 0;
	if (str[*i] == '*')
		wildcard = 1;
	while (str[*i] >= '0' && str[*i] <= '9' && wildcard == 0)
	{
		info.mfw = (info.mfw * 10) + (str[*i] - '0');
		(*i)++;
	}
	if (wildcard == 1)
	{
		info.mfw = va_arg(ap, int);
		if (info.mfw < 0)
		{
			info.leftjustf = 1;
			info.mfw = info.mfw * -1;
		}
		(*i)++;
	}
	return (info);
}

t_input	ft_getflags(const char *str, int *i)
{
	t_input info;

	info.zeropad = 0;
	info.leftjustf = 0;
	while (str[*i] == '0' || str[*i] == '-')
	{
		if (str[*i] == '0')
			info.zeropad = 1;
		if (str[*i] == '-')
			info.leftjustf = 1;
		(*i)++;
	}
	return (info);
}

t_input	ft_interpret(va_list ap, const char *str, int *i)
{
	t_input info;

	(*i)++;
	info = ft_getflags(str, i);
	info = ft_getmfw(ap, str, i, info);
	info = ft_getprecis(ap, str, i, info);
	info = ft_getdtype(str, i, info);
	if (info.conv == 'c' || info.conv == '%')
		info.prspec = 0;
	if (info.leftjustf == 1 || (info.prspec == 1 && info.conv != 's'))
		info.zeropad = 0;
	return (info);
}
