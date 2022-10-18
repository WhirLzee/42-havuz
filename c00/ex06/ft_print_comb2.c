/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:18:24 by alsay             #+#    #+#             */
/*   Updated: 2022/10/16 12:56:35 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int first_nbr, int second_nbr)
{
	ft_putchar('0' + first_nbr / 10);
	ft_putchar('0' + first_nbr % 10);
	ft_putchar(' ');
	ft_putchar('0' + second_nbr / 10);
	ft_putchar('0' + second_nbr % 10);
	if (first_nbr != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_nbr;
	int	second_nbr;

	first_nbr = 0;
	while (first_nbr <= 98)
	{
		second_nbr = first_nbr + 1;
		while (second_nbr <= 99)
		{
			ft_print(first_nbr, second_nbr);
			second_nbr++;
		}
		first_nbr++;
	}
}
