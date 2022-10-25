/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:13:47 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 15:32:15 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
  int num1;
  int num2;
  int div;
  int mod;

  num1 = 17;
  num2 = 5;

  printf("%d %d\n", num1, num2);
  ft_div_mod(num1, num2, &div, &mod);
  printf("%d %d\n", div, mod);

}
*/
