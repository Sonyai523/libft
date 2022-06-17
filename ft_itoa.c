/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:36:20 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:36:24 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenn(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*minus(int n, char *str, int len)
{
	n *= -1;
	while (n >= 1)
	{
		len--;
		str[len] = (char)((n % 10) + '0');
		n /= 10;
	}
	str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = lenn(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n >= 1)
	{
		while (n >= 1 && len)
		{
			len--;
			str[len] = (char)((n % 10) + '0');
			n /= 10;
		}
	}
	else
		str = minus(n, str, len);
	return (str);
}
