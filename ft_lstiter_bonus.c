/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:19:47 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/08 17:59:59 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * Description: Iterates the list ’lst’ and applies the function ’f’ on the 
 *content of each node.
*/

#include "libft.h"
void	f(void *p)
{
	printf("ENTROU no nó %c\n", p);
}

void	ft_lstinter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if(!lst || !f)
		return ;
	tmp = lst;
	while(tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/*
int	main(void)
{
	t_list	test;
	t_list	proximo;

	test.content = 'a';
	test.next = &proximo;
	proximo.content = 'b';
	proximo.next = NULL;
	printf("test %c\n", test.content);
	ft_lstinter(&test, f);


	test.content = 'f';
	test.next->content = 'g';
	test.next->next->content = 'h';
	test.next->next->next->next = NULL;
	ft_lstinter(&test, f);
*/
	return (0);
}
