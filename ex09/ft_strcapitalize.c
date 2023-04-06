/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:08:00 by djin              #+#    #+#             */
/*   Updated: 2023/04/06 11:14:37 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	frst;

	frst = !(*(str - 1) >= '0' && *(str - 1) <= '9');
	while (*str)
	{
		while ((*str >= 0 && *str <= 64))
			str++;
		while (*str == ' ')
			str++;
		while ((*str >= 123 && *str <= 126))
			str++;
		if (*str >= 'a' && *str <= 'z' && frst)
			*str = *str - 32;
		while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			str++;
	}
	return (str);
}

/**int main(void)
{
char text[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s\n", text);
	ft_strcapitalize(text);
	printf("After: %s\n", text);
	return (0);
}*/
