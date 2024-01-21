/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:53:49 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:57 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	if (src <= dest)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*#include "libft.h"
#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "ihaaai";
    char dest[] = "uuu" ;

    // Chama a função ft_memmove para copiar a string de src para dest
    ft_memmove(dest, src, 5);
	memmove(dest, src, 5);
    // Imprime o conteúdo de dest
    printf("Destino: %s\n", dest);
	printf("destino com função original: %s\n", dest);
    return 0;  // Retorna 0 para indicar um encerramento bem-sucedido
}*/
