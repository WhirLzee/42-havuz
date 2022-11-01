/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:49:06 by alsay             #+#    #+#             */
/*   Updated: 2022/11/01 13:41:49 by alsay            ###   ########.fr       */
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
	int	ilk;

	i = 0;
	ilk = 1;
	str = lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ilk == 1)
			{
				str[i] = str[i] - 32;
				ilk = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ilk = 0;
		else
			ilk = 1;
		i++;
	}
	return (str);
}
