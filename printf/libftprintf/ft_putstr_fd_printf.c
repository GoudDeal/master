/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:07:21 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:38:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putstr_fd_printf(char *s, int fd, t_format format)
{
	int	i;

	(void)fd;
	i = 0;
	if (format.precision == 1)
	{
		while (format.prec_size > 0 && s[i])
		{
			format.writecount = ft_putchar_ptf(s[i], 1, format);
			format.prec_size--;
			i++;
		}
		return (format.writecount);
	}
	else
	{
		while (s[i])
		{
			format.writecount = ft_putchar_ptf(s[i], 1, format);
			i++;
		}
	}
	return (format.writecount);
}

int		ft_putstr_int(char *s, int fd, t_format format, int arg)
{
	int	i;

	(void)fd;
	i = 0;
	if (arg < 0)
		i++;
	if (format.precision)
	{
		if (format.int_zero)
			return (format.writecount);
		while (s[i])
			format.writecount = ft_putchar_ptf(s[i++], 1, format);
		return (format.writecount);
	}
	while (s[i])
		format.writecount = ft_putchar_ptf(s[i++], 1, format);
	return (format.writecount);
}

int		ft_putstr_unsigned(char *s, int fd, t_format format, unsigned int arg)
{
	int	i;

	(void)fd;
	(void)arg;
	i = 0;
	if (format.precision)
	{
		if (format.int_zero)
			return (format.writecount);
		while (format.prec_size > 0)
		{
			format.writecount = ft_putchar_ptf('0', 1, format);
			format.prec_size--;
		}
		while (s[i])
			format.writecount = ft_putchar_ptf(s[i++], 1, format);
		return (format.writecount);
	}
	while (s[i])
		format.writecount = ft_putchar_ptf(s[i++], 1, format);
	return (format.writecount);
}

int		ft_putptr_fd(long int arg, int fd, t_format format)
{
	(void)fd;
	if (arg == 0)
		return (format.writecount = ft_putstr_fd_printf("0x0", 1, format));
	format.writecount = ft_putchar_ptf('0', 1, format);
	format.writecount = ft_putchar_ptf('x', 1, format);
	if (arg < 0)
		format.writecount = ft_putstr_fd_printf("ffffffff", 1, format);
	return (format.writecount);
}
