/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:15:08 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/17 16:18:57 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	if (s2[i] == 0)
		return ((char *)s1);
	while (s1[a] != '\0' && len > a + i)
	{
		if (s1[a + i] == s2[i])
		{
			if (s2[i + 1] == '\0')
				return ((char *)(s1 + a));
			i++;
		}
		else
		{
			i = 0;
			a++;
		}
	}
	return (NULL);
}
