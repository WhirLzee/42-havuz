/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 04:28:58 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 15:36:21 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main(void)
{
  int num1;
  int num2;
  int *a;
  int *b;

  num1 = 17;
  num2 = 5;
  a = &num1;
  b = &num2;

  printf("%d %d\n", num1, num2);
  ft_ultimate_div_mod(a, b);
  printf("%d %d\n", *a, *b);
}
*/
