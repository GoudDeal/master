/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 15:22:05 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:38:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *str, ...)
{
	t_format	format;
	int			i;
	va_list		va;
	char		*flags;

	i = 0;
	va_start(va, str);
	format = ft_initialize(&format);
	while (str[i])
	{
		if (str[i] != '%' && str[i])
			format.writecount = ft_putchar_ptf(str[i++], 1, format);
		else
		{
			format = ft_reset(format);
			flags = ft_getflags(&str[i]);
			format = ft_setflags(format, flags, &va);
			format.writecount = ft_print(format, &va);
			i += ft_strlen(flags);
			free(flags);
		}
	}
	va_end(va);
	return (format.writecount);
}
