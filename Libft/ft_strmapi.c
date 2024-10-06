/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:41:30 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 23:05:31 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	i = 0;
	new_str = malloc(ft_strlen(s) + 1);
	if (!s || !f)
		return (NULL);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*char	modify_char(unsigned int index, char c)
{
	return (toupper(c) + index);
}

int	main(void)
{
	char	str[];
	char	*new_str;

	str[] = "hello";
	new_str = ft_strmapi(str, modify_char);
	if (new_str)
	{
		printf("%s\n", new_str);
		free(new_str);
	}
	return (0);
}*/
