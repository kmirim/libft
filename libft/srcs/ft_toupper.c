/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:51:24 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/10/19 13:52:12 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int main()
{
    int lowercase = 'a';
    int uppercase = ft_toupper(lowercase);
    printf("O caractere minúsculo '%c' convertido 
para maiúsculo é '%c'.\n", lowercase, uppercase);
    return 0;
}*/
