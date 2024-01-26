/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:00:08 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/08 21:49:41 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list
 * del: The address of the function used to delete the content of a 
 *node if needed.

 * Description: Iterates the list ’lst’ and applies the function ’f’ on the 
 *content of each node. Creates a new list resulting of the successive 
 *applications of the function ’f’. The ’del’ function is used to delete the 
 *content of a node if needed.

 1. Primeiro criar uma variável para guardar as alterações da lista principal
 2. Utilizar a função ft_lstnew para criar uma nova lista. 
 3. O conteúdo da nova lista será a "lst-principal" com alterações pela função (f)(void*)
 4. Devemos apagar toda nova lista caso falhe.
 5. 
*/


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*ret;
	
	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_node)
		return (NULL);
	ret = new_lst;
	lst = lst->next;
	while (lst)
	{
		new_lst->next = ft_lstnew(f(lst->content));
		if (!new_lst->next)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	new_lst->next = NULL;
	return (ret);
}
