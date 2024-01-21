/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:07:14 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/11/04 13:11:27 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	caracter;

	caracter = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s && *s != caracter)
		s++;
	if (*s == caracter)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int main ()
{
	const char str[]  = "trimpouille";
	printf("retorno: %s\n", ft_strchr(str, 't' + 256));
	return (0);
}*/
