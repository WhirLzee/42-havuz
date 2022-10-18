/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:36:43 by alsay             #+#    #+#             */
/*   Updated: 2022/10/16 04:25:41 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int x, int y, int z)
{
	ft_putchar('0' + x);
	ft_putchar('0' + y);
	ft_putchar('0' + z);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				print(x, y, z);
				if (x != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
}
