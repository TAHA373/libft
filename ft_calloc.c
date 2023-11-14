/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:46:53 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/03 09:48:25 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_element, size_t size)
{
	void	*buf;

	buf = (void *)malloc(size * n_element);
	if (!buf)
		return (NULL);
	ft_bzero(buf, size * n_element);
	return (buf);
}
