/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:13:41 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 22:27:58 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup_str;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (!dup_str)
	{
		return (NULL);
	}
	while (i <= len)
	{
		dup_str[i] = s[i];
		i++;
	}
	return ((char *) dup_str);
}

/*int	main(void)
{
	char	original[];
	char	*copy;

	original = "Hello, World!";
	copy = ft_strdup(original);
	if (copy != NULL)
	{
		printf("Original: %s\n", original);
		printf("Copy: %s\n", copy);
		free(copy);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}*/
