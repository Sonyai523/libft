/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:41:37 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:41:38 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (str && (size_t)start >= ft_strlen(s))
	{
		str[0] = '\0';
		return (str);
	}
	if (str)
	{
		ft_memcpy(str, &s[start], len);
		str[len] = '\0';
		return (&str[0]);
	}
	return (NULL);
}
