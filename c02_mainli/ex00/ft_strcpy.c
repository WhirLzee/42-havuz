/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:44:34 by alsay             #+#    #+#             */
/*   Updated: 2022/11/01 13:45:50 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *ikinci, char *birinci)
{
	int	i;

	i = 0;
	while (birinci[i] != '\0')
	{
		ikinci[i] = birinci[i];
		i++;
	}
	ikinci[i] = '\0';
	return (ikinci);
}
