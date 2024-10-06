/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:31:31 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 22:55:54 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_occurrence = str;
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return ((char *)last_occurrence);
}

/*int	main()
{
	const char *str = "Hello, World!";
	char ch = 'o';
	char *result = ft_strrchr(str, ch);
	if (result != NULL)
	{
		printf("Last occurrence of '%c' at position: %ld\n", ch, result - str);
	}
	else
	{
		printf("character '%c' not found.\n", ch);
	}
	return (0);
}*/
