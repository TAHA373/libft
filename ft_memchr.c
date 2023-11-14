/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:14:49 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 17:53:38 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)ptr + idx) == (unsigned char)c)
			return ((void *)ptr + idx);
		idx++;
	}
	return (NULL);
}
/*int main(void)
{
	char tab[]="ABC1E";
	int c = '1';
	//ft_memchr(tab,c,5);
	printf("%p\n",&tab[3]);
	printf("%p",ft_memchr(tab,c,5));
}*/
