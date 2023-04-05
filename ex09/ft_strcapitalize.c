/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:08:00 by djin              #+#    #+#             */
/*   Updated: 2023/04/06 01:05:31 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	frst;

	i = 0;
	frst = !((str[i] - 1) >= '0' && (str[i] - 1) <= '9');
	while (str[i])
	{
		while (str[i] >= 0 && str[i] <= 64)
			i++;
		while (str[i] == 32)
			i++;
		while (str[i] >= 123 && str[i] <= 127)
			i++;
		if (str[i] >= 'a' && str[i] <= 'z' && frst)
		{
			str[i] = str[i] - 32;
		}
		while (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90)
			i++;
	}
	return (str);
}

/**int main(void)
{
char text[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s\n", text);
		ft_strcapitalize(text);
	printf("After: %s\n", ft_strcapitalize(text));
	return (0);
}*/
