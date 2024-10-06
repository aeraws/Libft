/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:42:43 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 18:17:41 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	total_bytes = num * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_bytes);
	return (ptr);
}

/*int	main(void)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)ft_calloc (5, sizeof(int));
	if (arr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		return (1);
	}
	while (i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}*/
