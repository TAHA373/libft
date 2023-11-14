/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:18:24 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 10:56:25 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
		{
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}
/*int main()
{
	char tab[]="ABCDEF";
	char *tab1;
	tab1=tab+2;
	int i =0;
	while (tab[i]!= '\0')
	{
		printf("%c",tab[i]);
		i++;
	}
	printf("\n");
	ft_memmove(tab1,tab,3);
	i=0;
	while (tab[i]!= '\0')
	{
		printf("%c",tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (tab1[i])
	{
		printf("%c",tab1[i]);
		i++;
	}
}*/