/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:38:49 by rarthric          #+#    #+#             */
/*   Updated: 2021/12/10 15:39:27 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (s[i] || (s[i] == '\0' && (char)c == '\0'))
	{
		if (s[i] == (char)c)
			return (str + i);
		i++;
	}
	return (0);
}
