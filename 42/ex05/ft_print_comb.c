/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 12:09:08 by dcyprien          #+#    #+#             */
/*   Updated: 2019/08/01 19:20:16 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_putchar_single(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	frstnmbr;
	int	scndnmbr;
	int	thrdnmbr;

	frstnmbr = 0;
	scndnmbr = 1;
	thrdnmbr = 2;
	while (frstnmbr <= 7)
	{
		while (scndnmbr <= 8)
		{
			while (thrdnmbr <= 9)
			{
				ft_putchar(frstnmbr + '0', scndnmbr + '0', thrdnmbr + '0');
				if (frstnmbr != 7)
					ft_putchar_single();
				thrdnmbr++;
			}
			scndnmbr++;
			thrdnmbr = scndnmbr + 1;
		}
		frstnmbr++;
		scndnmbr = frstnmbr + 1;
		thrdnmbr = scndnmbr + 1;
	}
}
