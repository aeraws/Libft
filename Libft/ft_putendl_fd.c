/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanchez <asanchez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:16:34 by asanchez          #+#    #+#             */
/*   Updated: 2024/10/05 23:02:56 by asanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	int	fd;

	fd = open ("putendl.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		return (1);
	}
	ft_putendl_fd("Hello, World!", fd);
	ft_putendl_fd("42 is cool", fd);
	close(fd);
	return (0);
}*/
