/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:45:00 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 12:49:06 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	p;

	if (*to_find == '\0')
		return ((char *)str);
	p = ft_strlen((char *)to_find);
	while (*str != '\0' && p <= len)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, p) == 0)
		{
			return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
/*int main()
{
	char tab[]="Bonjour tous le monde";
	char to_find[]="tous";
	char *dest = ft_strnstr(tab,to_find,7);
	printf("%s",dest);
}*/