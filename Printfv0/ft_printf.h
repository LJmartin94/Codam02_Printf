/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limartin <limartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 17:26:43 by limartin          #+#    #+#             */
/*   Updated: 2020/02/13 03:28:58 by limartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef	struct	s_input
{
	int		zeropad;
	int		leftjustf;
	int		mfw;
	int		prspec;
	int		precis;
	char	conv;
}				t_input;

typedef	union	u_conv
{
	char			c;
	char			*s;
	unsigned long	p;
	int				d;
	int				i;
	unsigned int	u;
	unsigned int	x;
	unsigned int	xcap;
	char			pct;
}				t_conv;

int				ft_printf(const char *format, ...);
int				ft_normalprint(const char *str, int *i, int ret);

t_input			ft_interpret(va_list ap, const char *str, int *i);
t_input			ft_getflags(const char *str, int *i);
t_input			ft_getmfw(va_list ap, const char *str, int *i, t_input info);
t_input			ft_getprecis(va_list ap, const char *str, int *i, t_input info);
t_input			ft_getdtype(const char *str, int *i, t_input info);

int				ft_switchboard(va_list ap, t_input info);
int				ft_outc(va_list ap, t_input info);
int				ft_outs(va_list ap, t_input info);
int				ft_outp(va_list ap, t_input info);
int				ft_outd(va_list ap, t_input info);
int				ft_outi(va_list ap, t_input info);
int				ft_outu(va_list ap, t_input info);
int				ft_outx(va_list ap, t_input info);
int				ft_outxcap(va_list ap, t_input info);
int				ft_outpct(t_input info);

#endif
