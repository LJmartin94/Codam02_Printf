/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switchboard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:56:37 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:38:14 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switchboard(va_list ap, t_input info)
{
	if (info.conv == '\0')
		return (0);
	else if (info.conv == 'c')
		return (ft_outc(ap, info));
	else if (info.conv == 's')
		return (ft_outs(ap, info));
	else if (info.conv == 'p')
		return (ft_outp(ap, info));
	else if (info.conv == 'd')
		return (ft_outd(ap, info));
	else if (info.conv == 'i')
		return (ft_outi(ap, info));
	else if (info.conv == 'u')
		return (ft_outu(ap, info));
	else if (info.conv == 'x')
		return (ft_outx(ap, info));
	else if (info.conv == 'X')
		return (ft_outxcap(ap, info));
	else if (info.conv == '%')
		return (ft_outpct(info));
	return (0);
}
