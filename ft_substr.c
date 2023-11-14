/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:50:48 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 18:05:10 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*d;
	size_t		s_size;
	size_t		last;

	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		d = (char *)malloc(1);
		if (d)
			d[0] = '\0';
		return (d);
	}
	s_size = ft_strlen(s);
	if (start < s_size)
		last = len - start;
	if (len > ft_strlen(s) - start)
		last = ft_strlen(s) - start;
	else
		last = len;
	d = (char *)malloc(sizeof(char) * (last + 1));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s + start, last + 1);
	return (d);
}
/*int main(void)
{
	char tab[]="Bonjour tous le monde";
	char *dest;
	dest =ft_substr(tab,6,14);
	printf("%s",dest);
}
*/
