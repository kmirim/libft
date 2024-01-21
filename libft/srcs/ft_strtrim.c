/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:26 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/11/03 19:52:08 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		j;
	char	*ptr;

	start = 0;
	if (!set)
		return ((char *)s1);
	while (isset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (isset(s1[end -1], set))
		end--;
	ptr = (char *)malloc(sizeof(*s1) * (end - start) + 1);
	if (!ptr || !s1)
		return (NULL);
	j = 0;
	while (start < end)
	{
		ptr[j++] = s1[start];
		start++;
	}
	ptr[j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("123456aaaa123456", "7"));
}
*/
