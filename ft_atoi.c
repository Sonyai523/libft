/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:32:31 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 16:59:00 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	rez;
	int	zn;

	rez = 0;
	i = 0;
	zn = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			zn = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rez = rez * 10 + (str[i++] - '0');
		if (zn == 1 && rez < 0)
			return (-1);
		if (zn == -1 && rez >= 469762049)
			return (0);
	}
	return ((int)rez * zn);
}
