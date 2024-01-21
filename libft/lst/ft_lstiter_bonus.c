/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:19:47 by lbarcelo          #+#    #+#             */
/*   Updated: 2024/01/07 12:22:42 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * Description: Iterates the list ’lst’ and applies the function ’f’ on the 
 *content of each node.
 
 * 1. Devemos interar um novo nó a lista lst;
 * 2. Devemos criar um ponteiro temporário para guardar a cabeça da lista;
 * 3. Atribuir ao antigo ponteiro o endereço do próximo;
 * 4. Percorrer o ponteiro temporário;
 * 5. Aplicar f em casa conteudo (content) do nó atual;
 * 6. Atribuir ao ponteiro temporário o valor do antigo ponteiro(end do próx);
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
	return (0);
}
