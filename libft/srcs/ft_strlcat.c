/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:22:00 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/10/27 21:12:22 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
int main()
{
	char	source[] = "rrrrrr^@^@^@^@a^@^@^@^@\0";
	char	desti[] = "uiuiui";
	size_t	len;

	len = ft_strlcat(desti, source, 27);
	printf("str de origem: %s\n", source);
	printf("str desti: %s\n", desti);
	printf("tamanho total de dest mais source: %li\n", len);

	return (0);
}*/
