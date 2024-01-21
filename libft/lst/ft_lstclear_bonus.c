/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 08:10:46 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/07 11:15:15 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The address of a pointer to a node.
** del: The address of the function used to delete the content of the node.
** Description: Deletes and frees the given node and every successor of that 
** node,using the function ’del’ and free(3). Finally, the pointer to the list
** must be set to NULL.
*/

/* 1. Declaramos um ponteiro para guardar a cabeça da lista.
   2. Criamos um looping para percorrer a lista.
   3. Guardamos o endereço do próximo nó em lst.
   4. Deleta e libera a memória do nó atual.
   5. Ponteiro temporário guarda o valor de lst (próximo nó da lista)
   6. Garante que o ponteiro original aponte para NULL após limpar a lista.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if(!lst || !*lst || !del)
		return ;
	tmp = *lst;
	while(tmp)
	{
		*lst = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = *lst;
	}
	*lst = NULL;
}

//obs: set mouse = a; selecionar com o mouse
