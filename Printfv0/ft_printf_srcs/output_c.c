/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 05:34:50 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 10:36:21 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printarg(char arg)
{
	write(1, &arg, 1);
}

static	int		ft_printmfw(t_conv type, t_input info, int len)
{
	int		ret;
	char	pad;

	ret = 0;
	pad = (info.zeropad == 1) ? '0' : ' ';
	if (type.c < 0)
		info.mfw--;
	while (info.mfw > len)
	{
		write(1, &pad, 1);
		ret++;
		(info.mfw)--;
	}
	return (ret);
}

int				ft_outc(va_list ap, t_input info)
{
	t_conv	type;
	int		len;
	int		ret;

	type.c = va_arg(ap, int);
	len = 1;
	ret = len;
	if (type.c < 0)
		len = 0;
	if (info.leftjustf == 0)
		ret = ret + ft_printmfw(type, info, len);
	ft_printarg(type.c);
	if (info.leftjustf == 1)
		ret = ret + ft_printmfw(type, info, len);
	return (ret);
}
