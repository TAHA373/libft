/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:33:19 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 17:54:38 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		newlen;
	char	*dest;

	start = 0; 
	end = ft_strlen(s1) - 1;
	if (!s1)
	{
		dest = (char *)malloc(1);
		if (dest)
			dest[0] = '\0';
		return (dest);
	}
	if (!set)
		return ((char *)s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	newlen = end - start + 1;
	dest = ft_substr(s1, start, newlen);
	return (dest);
}
/*int main(void)
{
	char tab[]=",,,,,,,,,,u,";
	char set[]=",";
	printf("%s",ft_strtrim(tab,set));
} */
