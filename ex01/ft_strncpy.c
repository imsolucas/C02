/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:01:12 by djin              #+#    #+#             */
/*   Updated: 2023/04/09 13:52:36 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned	int n)
{
	int	i;

	i = 0;
	while ((i < n) && (dest != (void *)0))
	{
		src[i] = dest[i];
		i++;
	}
	while ((i < n) && (dest != (void *)0))
	{
		src[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char	original_str[] = "Helloooo";
	char	new_str[] = "you";

	printf("Original string is: %s\n", original_str);
		ft_strncpy(new_str, original_str, 2);
	printf("New string is: %s\n", new_str);
	return (0);
}*/
