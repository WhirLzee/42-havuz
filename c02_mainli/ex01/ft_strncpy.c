/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:55:16 by alsay             #+#    #+#             */
/*   Updated: 2022/11/01 13:45:33 by alsay            ###   ########.fr       */
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
