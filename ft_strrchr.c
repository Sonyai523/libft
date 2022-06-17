/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:41:13 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 19:32:09 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	while (c > 127)
		c = c - 128;
	str = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (str + i);
	str = (char *)s;
	i = ft_strlen(s);
	while (i && str[i - 1])
	{
		if (s[i - 1] == c)
			return (str + i - 1);
		i--;
	}
	return (NULL);
}
