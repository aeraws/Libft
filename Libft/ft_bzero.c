/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:50:30 by asanchez          #+#    #+#             */
/*   Updated: 2024/09/23 22:29:54 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
	{
		return ;
	}
	*(unsigned char *)s = 0;
	ft_bzero((unsigned char *)s + 1, n - 1);
}

/*int	main (void)
{
	char buffer[10] = "Hello";

	ft_bzero(buffer, sizeof(buffer));

	int i = 0;
	while (i < sizeof(buffer))
	{
		i++;
		printf("%d", buffer[i]);
	}
	return (0);
}*/
