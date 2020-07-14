/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 04:37:27 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:26:13 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printarg(unsigned long arg)
{
	char	toprint;
	char	*hexchars;

	hexchars = "0123456789abcdef";
	if (arg < 0)
		arg *= -1;
	toprint = hexchars[(arg % 16)];
	arg = arg / 16;
	if (arg > 0)
		ft_printarg(arg);
	write(1, &toprint, 1);
}

static	int		ft_printprecis(t_input info, int len)
{
	int		ret;

	ret = 0;
	while (info.precis > len)
	{
		write(1, "0", 1);
		ret++;
		(info.precis)--;
	}
	return (ret);
}

static	int		ft_printmfw(t_input info, int len)
{
	int		ret;
	char	pad;

	ret = 0;
	pad = (info.zeropad == 1) ? '0' : ' ';
	info.mfw = info.mfw - 2;
	while (info.mfw > (info.precis * info.prspec) && info.mfw > len)
	{
		write(1, &pad, 1);
		ret++;
		(info.mfw)--;
	}
	return (ret);
}

static	int		ft_getlen(unsigned long arg, t_input info)
{
	int len;

	len = 1;
	if (arg < 0)
		arg = arg * -1;
	while ((arg / 16) > 0)
	{
		arg = arg / 16;
		len++;
	}
	if (arg == 0 && info.prspec == 1 && info.precis == 0)
		len = 0;
	return (len);
}

int				ft_outp(va_list ap, t_input info)
{
	t_conv	type;
	int		len;
	int		ret;

	type.p = va_arg(ap, unsigned long);
	len = ft_getlen(type.p, info);
	ret = len;
	if (info.leftjustf == 0 && info.zeropad == 0)
		ret = ret + ft_printmfw(info, len);
	write(1, "0x", 2);
	ret = ret + 2;
	if (info.leftjustf == 0 && info.zeropad == 1)
		ret = ret + ft_printmfw(info, len);
	if (info.prspec == 1)
		ret = ret + ft_printprecis(info, len);
	if (len > 0)
		ft_printarg(type.p);
	if (info.leftjustf == 1)
		ret = ret + ft_printmfw(info, len);
	return (ret);
}
