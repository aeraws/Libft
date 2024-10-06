/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:13:16 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 22:55:43 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main ()
{
	const char *s = "Hello, World!";
	char ch = 'W';
	char *result = ft_strchr(s, ch);
	if (result != NULL)
	{
		printf("Character '%c' found at position: %ld\n", ch, result - s);
	}
	else
	{
		printf("Character '%c' not found.\n", ch);
	}
	return (0);
}*/
