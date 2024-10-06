/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:31:24 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 21:20:29 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i <= len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main (void)
{
	const char *big = "Hello, world!";
	const char *little = "world";
	size_t len = 12;

	char *result = ft_strnstr(big, little, len);

	if (result)
	{
		printf("Found substring: %s\n", result);
	}
	else
	{
		printf("Substring not found within the first %zu characters.\n", len);
	}
	return (0);
}*/
