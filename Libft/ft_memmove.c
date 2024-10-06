/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:38:37 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 18:26:46 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/*int	main ()
{
	char str[] = "Hello, World!";
	printf("Before memmove: %s\n", str);

	ft_memmove(str + 0, str + 7, 6);
	
	printf("After memmove: %s\n", str);
	
	return (0);
}*/
