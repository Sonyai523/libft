/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:40:05 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:40:07 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ch;
	size_t	len;

	i = ft_strlen(dst);
	ch = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dstsize - 1 > i && src[ch])
	{
		dst[i++] = src[ch++];
		dst[i] = '\0';
	}
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	return (len);
}
