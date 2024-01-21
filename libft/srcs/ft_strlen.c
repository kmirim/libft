/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:04:33 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/10/19 13:48:49 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}
/*
#include <stdio.h>

int main()
{
	const char *minhaString = "Isso é uma string de exemplo";
	size_t comprimento = ft_strlen(minhaString);
	printf("A string tem %zu caracteres.\\n", comprimento);

	return 0;
}*/
