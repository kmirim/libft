/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:54:55 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/10/28 01:12:12 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && i + j < len)
			++j;
		if (little[j] == 0)
			return ((char *)(big + i));
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main ()
{
	char palheiro[] = "aeiou";
	char agulha[] = "ou";
	printf ("result: %s\n", ft_strnstr(palheiro, agulha, 5));
}*/
