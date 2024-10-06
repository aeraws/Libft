/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:02:44 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 21:37:16 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	const char	*original;
	int			start;
	int			length;
	char		*result;

	original = "Hello, world!";
	start = 7;
	length = 5;
	result = ft_substr(original, start, length);
	if (result != NULL)
	{
		printf ("Substring: %s\n", result);
		free (result);
	}
	else
	{
		printf ("Invalid parameters or memory allocation failed.\n");
	}
	return (0);
}*/
