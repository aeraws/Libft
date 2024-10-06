/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:43:47 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/23 22:30:41 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main (void)
{
	const char *str1 = "Hello";
	const char *str2 = "Everybody";

	int result = ft_strncmp(str1, str2, 9);

	if (result == 0)
	{
		printf("The strings are equal.\n");
	}
	else if (result > 0)
	{
		printf("The first string is lexicographically smaller.\n");
	}
	else
	{
		printf("The first string is lexicographically larger.\n");
	}
	return (0);
}*/
