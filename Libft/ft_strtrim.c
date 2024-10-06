/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:37:07 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 21:52:05 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	result = (char *)malloc((end - start + 1) * (sizeof(char)));
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		start++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	const char	*str;
	const char	*set;
	char		*result;

	str = "Hello, world!";
	set = " ";
	result = ft_strtrim(str, set);
	if (result != NULL)
	{
		printf("Trimmed string: '%s'\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed or invalid input.\n");
	}
	return (0);
}*/
