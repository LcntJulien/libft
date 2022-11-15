/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:58:42 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/15 19:12:19 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long i;
	char c;

	i = n;
	if (i == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (i < 0)
		{
			write(fd, "-", 1);
			i = -i;
			ft_putnbr_fd(i, fd);
		}
		else if (i < 10)
		{
			c = i + '0';
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd(i / 10, fd);
			c = (i % 10) + '0';
			write(fd, &c, 1);
		}
	}
}