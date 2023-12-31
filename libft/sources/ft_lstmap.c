/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:55:30 by lbatista          #+#    #+#             */
/*   Updated: 2023/09/15 13:11:45 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Iterates the list ’lst’ and applies the function ’f’ to the content of each
*	element. Creates a new list resulting of the successive applications of the
*	function ’f’. The ’del’ function is used to delete the content of an
*	element if needed.
*
*	RETURN VALUES
*	The new list. NULL if the allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elem;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		elem = ft_lstnew((*f)(lst->content));
		if (!elem)
			ft_lstclear(&elem, (*del));
		else
			ft_lstadd_back(&new, elem);
		lst = lst->next;
	}
	return (new);
}
