/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarthric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:38:36 by rarthric          #+#    #+#             */
/*   Updated: 2021/10/28 17:10:33 by rarthric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*len(const char *s, int *ii, char c)
{
	int		len;
	char	*s1;
	char	*str;
	int		i;

	i = *ii;
	len = 0;
	s1 = (char *)s;
	while (s1[i] == c)
		i++;
	while (s1[i] && s1[i] != c)
	{
		len++;
		i++;
	}
	str = ft_substr(s, i - len, len);
	*ii = i;
	return (str);
}

static int	number_of_st(const char *s, char c)
{
	int		i;
	int		rez;
	char	*s1;

	s1 = ft_strtrim(s, &c);
	if (!s1)
		return (0);
	i = 0;
	rez = 0;
	while (s1[i])
	{
		while (s1[i] == c && s1[i])
			i++;
		while (s1[i] != c && s1[i])
			i++;
		rez++;
	}
	free (s1);
	return (rez);
}

static char	**ft_fre(char **arrs, int i)
{
	while (i >= 0)
		free(arrs[i--]);
	free(arrs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		i1;
	char	**str;

	if (!s)
		return (NULL);
	i1 = 0;
	i = 0;
	str = malloc(sizeof(char *) * (number_of_st(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] && i1 < (number_of_st(s, c)))
	{
		str[i1] = len(s, &i, c);
		if (!str[i1])
		{
			ft_fre(str, i1);
			return (NULL);
		}
		i1++;
	}
	str[i1] = NULL;
	return (str);
}
