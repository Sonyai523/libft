/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:38:17 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:38:19 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec(long i, int fd)
{
	long	i1;

	if (i > 0)
	{
		rec(i / 10, fd);
		i1 = i % 10 + 48;
		write(fd, &i1, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = (long)n;
	if (i == 0)
		write(fd, "0", 1);
	if (i > 0)
		rec(i, fd);
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
		rec(i, fd);
	}
}
