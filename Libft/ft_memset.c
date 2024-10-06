/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:22:51 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 18:27:17 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

/*int	main(void)
{
	char	str[50];

	str = "Hello, World!";
	printf("Before memset: %s\n", str);
	ft_memset(str, 'x', 5);
	printf("After memset: %s\n", str);
	return (0);
}*/
