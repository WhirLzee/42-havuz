/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:49:06 by alsay             #+#    #+#             */
/*   Updated: 2022/11/01 04:56:21 by alsay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = lowercase(str);
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			while (!((str[i] >= 'a' && str[i] <= 'z')
					|| (str[i] >= '0' && str[i] <= '9')) && str[i])
				i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "LOLOLaaa";
	char	str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf ("%s\n", ft_strcapitalize(str1));
	printf ("%s\n", ft_strcapitalize(str2));
	return (0);
}
*/
