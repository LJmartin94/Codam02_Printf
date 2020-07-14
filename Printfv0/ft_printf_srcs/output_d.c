/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 04:28:52 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:15:58 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printarg(long int arg)
{
	char		toprint;

	if (arg < 0)
		arg *= -1;
	toprint = (arg % 10) + '0';
	arg = arg / 10;
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

static	int		ft_printmfw(t_conv type, t_input info, int len)
{
	int		ret;
	char	pad;

	ret = 0;
	pad = (info.zeropad == 1) ? '0' : ' ';
	if (type.d < 0)
		info.mfw--;
	while (info.mfw > (info.precis * info.prspec) && info.mfw > len)
	{
		write(1, &pad, 1);
		ret++;
		(info.mfw)--;
	}
	return (ret);
}

static	int		ft_getlen(long int arg, t_input info)
{
	int len;

	len = 1;
	if (arg < 0)
		arg = arg * -1;
	while ((arg / 10) > 0)
	{
		arg = arg / 10;
		len++;
	}
	if (arg == 0 && info.prspec == 1 && info.precis == 0)
		len = 0;
	return (len);
}

int				ft_outd(va_list ap, t_input info)
{
	t_conv	type;
	int		len;
	int		ret;

	type.d = va_arg(ap, int);
	len = ft_getlen(type.d, info);
	ret = len;
	if (info.leftjustf == 0 && info.zeropad == 0)
		ret = ret + ft_printmfw(type, info, len);
	if (type.d < 0)
	{
		write(1, "-", 1);
		ret++;
	}
	if (info.leftjustf == 0 && info.zeropad == 1)
		ret = ret + ft_printmfw(type, info, len);
	if (info.prspec == 1)
		ret = ret + ft_printprecis(info, len);
	if (len > 0)
		ft_printarg(type.d);
	if (info.leftjustf == 1)
		ret = ret + ft_printmfw(type, info, len);
	return (ret);
}
