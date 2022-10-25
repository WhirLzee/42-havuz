/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:44:34 by alsay             #+#    #+#             */
/*   Updated: 2022/10/25 20:05:21 by alsay            ###   ########.fr       */
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
/*
#include <stdio.h>

int main(void)
{
	char birinci[] = "aaaaaaaaaaaaa";     //ilk dizi kaç karakterli ise iikinci dizi 
	char ikinci[] = "bbbbbbbb";		      //o kadar karaktere sahip olur.

	printf("kopyadan önce birinci dizi: %s\n", birinci);
	printf("kopyadan önce ikinci dizi: %s\n\n", ikinci);

	ft_strcpy(ikinci, birinci);

	printf("kopyadan sonra ikinci dizi: %s\n", ikinci);

	return (0);
}
*/
