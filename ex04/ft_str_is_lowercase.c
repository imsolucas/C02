/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:16:47 by djin              #+#    #+#             */
/*   Updated: 2023/04/04 20:21:56 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int i;

	i=0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')	
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
char text[] = "fHH8170IUJI";
printf("Str shows: %d\n", ft_str_is_alpha(text));
	return (0);
}
