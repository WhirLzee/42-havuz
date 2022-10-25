/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:04:17 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 15:27:36 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
#include <stdio.h>

int main(void)
{
  int num1;
  int num2;

  num1 = 5;
  num2 = 10;

  printf("%d %d\n", num1, num2);
  ft_swap(&num1, &num2);
  printf("%d %d\n", num1, num2);
}
*/
