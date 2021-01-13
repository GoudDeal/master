/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 16:18:10 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:38:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_print_precision_int(t_format format, int arg)
{
	if (arg < 0 && format.inversed)
	{
		format.writecount = ft_putchar_ptf('-', 1, format);
		if (format.precision)
		{
			while (format.prec_size-- > 0)
				format.writecount = ft_putchar_ptf('0', 1, format);
		}
		return (format.writecount);
	}
	if (format.precision)
	{
		while (format.prec_size-- > 0)
			format.writecount = ft_putchar_ptf('0', 1, format);
	}
	return (format.writecount);
}

int		ft_print_precision_ptr(t_format format, long int arg)
{
	(void)arg;
	if (format.precision)
	{
		while (format.prec_size-- > 0)
			format.writecount = ft_putchar_ptf('0', 1, format);
	}
	return (format.writecount);
}
