/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:55:19 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 19:29:03 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;
	size_t		src_len;
	size_t		i;

	src_len = 0;
	s = src;
	i = 0;
	while (*s++)
	{
		src_len++;
	}
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/*int	main ()
{
	char dest[10];
	const char *src = "Hello, World!";

	size_t result = ft_strlcpy(dest, src, sizeof(dest));

	printf("Copied string: %s\n", dest);
	printf("Total length of source: %zu\n", result);

	return (0);
}*/
