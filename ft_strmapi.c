/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:40:34 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:40:35 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	str = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (str)
	{
		while (s[++i])
			str[i] = f(i, s[i]);
		return (str);
	}
	return (NULL);
}
