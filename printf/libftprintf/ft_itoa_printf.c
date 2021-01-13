/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:26:31 by user42            #+#    #+#             */
/*   Updated: 2021/01/13 17:27:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		get_size(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 1 && ++i)
		n = n / 10;
	return (i);
}

int		ft_power(int n, int exp)
{
	if (exp == 0)
		return (1);
	else if (exp == 1)
		return (n);
	return (ft_power(n * 10, exp - 1));
}

char	*ft_itoa_printf(int n)
{
	int				n_size;
	char			*result;
	int				buffer;
	int				k;
	unsigned int	nb;

	if (n < 0)
		nb = n * (-1);
	else
		nb = n;
	k = n < 0 ? 1 : 0;
	n_size = get_size(nb);
	n_size = n < 0 ? n_size + 1 : n_size;
	if (!(result = (char *)malloc((n_size + 1) * sizeof(char))))
		return (NULL);
	n_size = n < 0 ? ft_power(10, n_size - 2) : ft_power(10, n_size - 1);
	result[0] = n < 0 ? '-' : result[0];
	while (n_size >= 1)
	{
		buffer = nb / n_size % 10;
		result[k++] = buffer + '0';
		n_size /= 10;
	}
	result[k] = 0;
	return (result);
}
