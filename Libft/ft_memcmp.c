/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:41:11 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/25 18:24:11 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main ()
{
	char block1[] = {6, 2, 3, 4, 5};
	char block2[] = {1, 2, 3, 4, 5};

	int	result = ft_memcmp(block1, block2, 5);

	if (result == 0)
	{
		printf("The memory blocks are equal.\n");
	}
	else if (result < 0)
	{
		printf("Block1 is less than Block2.\n");
	}
	else
	{
		printf("Block1 is greater than Block2.\n");
	}
	return (0);
}*/
