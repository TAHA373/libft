/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:27 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/08 17:51:34 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	p = ft_lstlast(*lst);
	p->next = new;
}
/* int main()
{
	char string[10] = "thththth";
	char string1[10] = "uioyewgof";
	t_list *node;
	t_list *last; 
	
	node = ft_lstnew(string);
	last = ft_lstnew(string1);
	//last = ft_lstlast(node);
	ft_lstadd_back(&node,last);
 printf("%p \n" , node->next);
	printf("%s \n" , last->content);
	printf("%p" , last);
}*/