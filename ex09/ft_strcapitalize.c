/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:08:00 by djin              #+#    #+#             */
/*   Updated: 2023/04/05 13:42:38 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int i;

	i=0;
	while (str[i] != '\0')
	{
		while((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			while((str[i] >= 'a') && (str[i] <= 'z'))
			{
				while ((str[i] >= 'a' && str[i] <= 'z'))
					{
				   		str[i] = str[i] - 32;
					 }
				while ((str[i] >= 'A' && str[i] <= 'Z'))
					{
						str[i] = str[i] + 32;
					}
				if (str[i] == 32)
				{
					i++;
				}
				i++;
				{
					return (str);
				}
			}
		}
	}
	return (str);
}

int main(void)
{
char text[] = "You Are Pretty";

	printf("Before: %s\n", text);
		ft_strcapitalize(text);
	printf("After: %s\n", ft_strcapitalize(text));
	return (0);
}
