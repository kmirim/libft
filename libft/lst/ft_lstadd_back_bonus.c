/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:08:27 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/06 21:47:17 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* lst: The address of a pointer to the first link of a list.
 * new: The address of a pointer to the node to be added to the list.
 * Description: Adds the node ’new’ at the end of the list.

 * Para adcionarmos um nó ao final da lista, devemos percorrer ela toda.
 * Criar um nó que armazene o valor do último nó da lista.
 * Apontar o antigo último nó para o novo último nó da lista.
 * E o novo último nó (new) para NULL.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	last_node;
	
	if(lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while(lst)
				lst = lst->next;
			last_node = lst;
			last_node->next = new;
			new->next = NULL;
		} 
	}
}
