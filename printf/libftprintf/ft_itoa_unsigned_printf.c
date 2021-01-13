/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 14:30:13 by dcyprien          #+#    #+#             */
/*   Updated: 2021/01/13 17:25:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_itoa_unsigned_printf(unsigned int n)
{
	int		n_size;
	char	*result;
	int		buffer;
	int		k;

	k = 0;
	n_size = get_size(n);
	if (!(result = (char *)malloc((n_size + 1) * sizeof(char))))
		return (NULL);
	n_size = ft_power(10, n_size - 1);
	while (n_size >= 1)
	{
		buffer = n / n_size % 10;
		result[k++] = buffer + '0';
		n_size /= 10;
	}
	result[k] = 0;
	return (result);
}
