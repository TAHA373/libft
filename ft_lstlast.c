/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:19:01 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 16:12:31 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last && last->next)
		last = last->next;
	return (last);
}
/*
int main()
{
	char string[10] = "thththth";
	t_list *node;
	t_list *last; 
	
	node = ft_lstnew(string);
	last = ft_lstlast(node);	

	printf("%s \n" , last->content);
	printf("%p" , last->next);
}*/