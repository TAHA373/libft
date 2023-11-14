/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:29:11 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 10:50:55 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*s1;

	i = 0;
	d1 = (unsigned char *)dest;
	s1 = (unsigned char *)src;
	if (!d1 && !s1)
		return (NULL);
	while (i < n)
	{
		*(d1 + i) = *(s1 + i);
		i++;
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
	ft_memcpy(tab1,tab,3);
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