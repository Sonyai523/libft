/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:39:51 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:39:53 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc(sizeof(char), (size + 1));
	if (str)
	{
		ft_memcpy(str, s1, ft_strlen(s1));
		ft_memcpy(&str[ft_strlen(s1)], s2, ft_strlen(s2));
		return (str);
	}
	return (NULL);
}
