/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:06:34 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/06 19:11:36 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* lst: The address of a pointer to the first link of a list
 * new: The address of a pointer to the node to be added to the list.
 * Description: Adds the node ’new’ at the beginning of the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
/*1. Criar uma variável para guardar o primeiro nó(lst).
 *2. Passar o novo nó (new) para o antigo primeiro nó (lst).
 *3. Passar o antigo primeiro nó (lst) como o seguinte do novo nó (new).
 */
	t_list	*swap;

	swap = *lst;
	*lst = new
	new->next = swap;
}

