/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:18:23 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 15:42:54 by alsay            ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_index;

	i = 0;
	while (i < size)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_index])
			{
				min_index = j;
			}
			j++;
		}
		ft_swap(&tab[i], &tab[min_index]);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void ft_sort_int_tab(int *tab, int size);

int main() {
    int test[] = {5, 3, 1, 8, 2};
    int s = 5;

    ft_sort_int_tab(test, s);

    for (int i = 0; i < s; i++) {
        printf("%d\n", test[i]);
    }
    return 0;
}
*/
