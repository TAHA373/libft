/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:29:51 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/07 21:47:43 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **strs, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(strs[i]);
		i++;
	}
	free (strs);
	return (NULL);
}

static int	ft_count(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (j < i)
	{
		res[j] = s[j];
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	i = 0;
	res[count] = NULL;
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		res[i] = ft_word(s, c);
		if (!res[i])
			return (ft_free(res, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int		i;
	char	**res = ft_split("this,is,just,a,test!", ',');
	if (res)
	{
		i = 0;
		while (res[i])
		{
			printf("%s\n", res[i]);
			free(res[i]);
			i++;
		}
		free(res);
	}
	return (0);
}*/