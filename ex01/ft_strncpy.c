/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:01:12 by djin              #+#    #+#             */
/*   Updated: 2023/04/12 17:39:52 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char	original_str[] = "Helloooo";
	char	new_str[100];
	unsigned int	n = 4;

	printf("Original string is: %s\n", original_str);
		ft_strncpy(new_str, original_str, n);
	printf("New string is: %s\n", new_str);
	return (0);
}*/
