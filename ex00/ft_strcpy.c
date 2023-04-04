/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 09:41:24 by djin              #+#    #+#             */
/*   Updated: 2023/04/04 16:17:11 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}

/**
int	main()
{
	char	original_str[20] = "Hello World";
	char	new_str[20];

		ft_strcpy(new_str, original_str);
	printf("%s\n", new_str);
	return (0);
}
*/
