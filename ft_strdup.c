/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:39:29 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:39:31 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str && s1)
	{
		ft_strlcpy(str, s1, ft_strlen(s1) + 1);
		return (str);
	}
	return (NULL);
}
