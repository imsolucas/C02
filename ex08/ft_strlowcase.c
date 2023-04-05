/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:05:21 by djin              #+#    #+#             */
/*   Updated: 2023/04/05 12:07:01 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int i;

	i=0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int main(void)
{
char text[] = "AJGFH";

	printf("Before: %s\n", text);
		ft_strupcase(text);
	printf("After: %s\n", ft_strupcase(text));
	return (0);
}
