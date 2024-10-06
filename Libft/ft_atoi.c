/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:55:46 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/04 18:37:30 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/*int	main()
{
	const char *str1 = "	-1234";
	const char *str2 = "5678";
	const char *str3 = "	+42abec";

	printf("string: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
	printf("string: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
	printf("string: '%s' -> Integer: %d\n", str3, ft_atoi(str3));

	return (0);
}*/
