/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 14:32:30 by dcyprien          #+#    #+#             */
/*   Updated: 2019/08/01 17:54:30 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	frstnmbr;
	int	scndnmbr;

	frstnmbr = 0;
	scndnmbr = 1;
	while (frstnmbr <= 98)
	{
		while (scndnmbr <= 99)
		{
			ft_printnbr(frstnmbr);
			ft_putchar(' ');
			ft_printnbr(scndnmbr);
			if (frstnmbr != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			scndnmbr++;
		}
		frstnmbr++;
		scndnmbr = frstnmbr + 1;
	}
}
