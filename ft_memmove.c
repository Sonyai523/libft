/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:37:27 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 15:37:30 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;
	int	n1;

	n1 = (int)n;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (--n1 >= i)
			((unsigned char *)dst)[n1] = ((unsigned char *)src)[n1];
	}
	else
	{
		while (i < n1)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
