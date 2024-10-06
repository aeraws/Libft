/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:14:05 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 19:14:45 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = 0;
	dst_len = 0;
	i = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	while (i < src_len && (dst_len + i + 1) < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main ()
{
	char dest[15] = "Hello";
	const char *src = " World!";

	size_t result = ft_strlcat(dest, src, sizeof(dest));

	printf("Concatenated string: %s\n", dest);
	printf("Total length attempted: %zu\n", result);

	return (0);
}*/
