/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:45:39 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 22:33:23 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (dest == NULL)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++j])
		dest[i + j] = s2[j];
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char		str1[];
	const char	*str2;
	char		*result;

	str1[] = "Hello, ";
	str2 = "world!";
	result = ft_strjoin(str1, str2);
	if (result != NULL)
	{
		printf("Joined strings: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed or no strings to join.\n");
	}
	return (0);
}*/
