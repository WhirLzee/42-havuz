/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:07:23 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 15:41:03 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		ft_swap(&tab[left], &tab[right]);
		left++;
		right--;
	}
}
/*
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main() {
    int test[] = {1, 2, 3, 4, 5};
    int s = 5;

    ft_rev_int_tab(test, s);

    for (int i = 0; i < s; i++) {
        printf("%d ", test[i]);
    }

    return 0;
}
*/
