/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:21:14 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/06 21:08:02 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* lst: The beginning of the list.
 * Return value: The length of the list
 * Description: Counts the number of nodes in a list.
 
 * Devemos verificar se a lista encadeada (lst) é valida;
 * Depois devemos criar um contador e um while que percorre os nós
 * O próximo nó deve ser sempre outro nó para que indique que a lista não está no final.
 * Caso o nó atual aponte para NULL, indicando que chegou ao final e devemos retornar o tamanho da lista
*/

int	ft_lstsize(t_list *lst)
{	
	int	count;

	if(!lst)
		return (0);
	count = 0;
	while(lst)
	{
		lst = lst->next;
		count++;
	}
	return(count);
}
