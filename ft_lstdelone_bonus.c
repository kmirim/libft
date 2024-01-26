/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 07:39:38 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/07 08:19:53 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The node to free.
 * del: The address of the function used to delete the content.
 * Return: none.
 * Description: Takes as a parameter a node and frees the memory of the node’s
 *content using the function ’del’ given as a parameter and free the node. The
 *memory of ’next’ must not be freed.
 
 * Criar uma função que recebe um nó que deve ser deletado
 * Conteúdo do nó anterior ao que foi deletado deve ser ligado a um próximo com conteúdo
 *a menos que seja o último, ai ele é NULL.
 *
*/



#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst || !del)
		return;
	del(lst->content);
	free(lst);
}
