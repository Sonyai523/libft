/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:41:25 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:41:27 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, (int)s1[i]) != 0)
		i++;
	while (len > i && ft_strchr(set, (int)s1[len]) != 0)
		len--;
	str = ft_substr(s1, i, (len - i) + 1);
	if (!str)
		return (0);
	return (str);
}
