/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:59:50 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:24:06 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printarg(char *str, int len)
{
	while (len > 0)
	{
		write(1, str, 1);
		len--;
		str++;
	}
}

static	int		ft_printmfw(t_conv type, t_input info, int len)
{
	int		ret;
	char	pad;

	ret = 0;
	pad = (info.zeropad == 1) ? '0' : ' ';
	if (type.s < 0)
		info.mfw--;
	while (info.mfw > len)
	{
		write(1, &pad, 1);
		ret++;
		(info.mfw)--;
	}
	return (ret);
}

static	int		ft_getlen(char *str)
{
	int len;

	if (str == NULL || str[0] < 0 || str[0] > 127)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int				ft_outs(va_list ap, t_input info)
{
	t_conv	type;
	int		len;
	int		ret;

	type.s = va_arg(ap, char*);
	len = ft_getlen(type.s);
	if (type.s == NULL)
	{
		type.s = "(null)";
		len = 6;
	}
	if (len > info.precis && info.prspec == 1)
		len = info.precis;
	ret = len;
	if (info.leftjustf == 0)
		ret = ret + ft_printmfw(type, info, len);
	ft_printarg(type.s, len);
	if (info.leftjustf == 1)
		ret = ret + ft_printmfw(type, info, len);
	return (ret);
}
