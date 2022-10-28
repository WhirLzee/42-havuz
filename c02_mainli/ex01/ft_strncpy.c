/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:55:16 by alsay             #+#    #+#             */
/*   Updated: 2022/10/28 14:22:07 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *hedef, char *kaynak, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (kaynak[i] != '\0' && i < n)
	{
		hedef[i] = kaynak[i];
		i++;
	}
	hedef[i] = '\0';
	return (hedef);
}
/*
#include <stdio.h>

int main(void)
{
	char kaynak[] = "aaaaaaaaaa";
	char hedef[] = "bbbbbbbbbb";
	int n = 4;

  printf("%s\n", hedef);
  ft_strncpy(hedef, kaynak, n);
  printf("%s\n", hedef); 
}
*/
