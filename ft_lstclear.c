/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkannane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:53 by tkannane          #+#    #+#             */
/*   Updated: 2023/11/06 17:58:34 by tkannane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst1;
	t_list	*next;

	lst1 = *lst;
	if (!lst || !del)
		return ;
	while (lst1)
	{
		next = lst1->next;
		if (lst1->content)
			del(lst1->content);
		free(lst1);
		lst1 = next;
	}
	*lst = NULL;
}
