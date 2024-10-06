/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:15:42 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 23:03:48 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	to_uppercase(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}*/

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "Hello world";
	ft_striteri(s, to_uppercase);
	printf("%s\n", s);
	return (0);
}*/
