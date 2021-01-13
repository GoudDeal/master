/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_padding_next.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 14:28:30 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:38:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_print_padding_unsigned(t_format format, long int arg)
{
	(void)arg;
	if (format.inversed == 0)
	{
		while (format.padding > 0)
		{
			format.writecount = ft_putchar_ptf(format.fill, 1, format);
			format.padding--;
		}
		return (format.writecount);
	}
	while (format.padding > 0)
	{
		format.writecount = ft_putchar_ptf(format.fill, 1, format);
		format.padding--;
	}
	return (format.writecount);
}
