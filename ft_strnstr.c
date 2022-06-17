/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:40:59 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:41:00 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	needllen;
	char	*str;

	h = 0;
	needllen = ft_strlen(needle);
	str = (char *)haystack;
	if (needllen == 0 || needle == 0)
		return ((char *)haystack);
	if (len == 0 || ft_strlen(haystack) < needllen)
		return (NULL);
	while (*haystack && h <= (len - needllen))
	{
		if (ft_strncmp(str, needle, needllen) == 0)
			return (str);
		str++;
		h++;
	}
	return (0);
}
