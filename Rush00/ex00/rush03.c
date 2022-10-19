/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtalsik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:17:02 by mtalsik           #+#    #+#             */
/*   Updated: 2022/10/15 19:52:13 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include"ft_putchar.c"

void	x_out(int x)
{
	ft_putchar('A');
	if (x > 1)
	{
		while ((x--) - 2 > 0)
		{
			ft_putchar('B');
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	y_out( int x, int y )
{
	int	xc;

	xc = x;
	while ((y--) - 2 > 0)
	{
		ft_putchar('B');
		if (x > 1)
		{
			while ((x--) - 2 > 0)
			{
				ft_putchar(' ');
			}
			x = xc;
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	rush03( int x, int y )
{
	x_out(x);
	y_out(x, y);
	if (y > 1)
	{
		x_out(x);
	}
}
