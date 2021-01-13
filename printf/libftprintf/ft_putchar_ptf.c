/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_printf.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:03:16 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:39:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putchar_ptf(char c, int fd, t_format format)
{
	write(fd, &c, 1);
	format.writecount++;
	return (format.writecount);
}
