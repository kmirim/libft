/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:02:22 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/06 22:12:14 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* content: The content to create the node with.
 * Return value: The new node.
 * Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with
 *the value of the parameter ’content’. The variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	new;

	new = (t_list *)malloc(sizeof(new));
	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
