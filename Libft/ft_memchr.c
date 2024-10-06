/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:13:13 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 18:23:29 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[] = "Hello, World!";
	char *result = ft_memchr(str, 'd', sizeof(str));
	if (result != NULL)
	{
		printf("Character 'd' found at position: %ld\n", result - str);
	}
	else
	{
		printf("Character 'd' not found.\n");
	}
	return 0;
}*/
