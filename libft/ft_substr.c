/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:39:33 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/02/17 18:59:04 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = start;
	j = 0;
	if (len == 0 || ft_strlen(s) <= start)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(s) < len + start)
		str = malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (j < len && j < ft_strlen(s))
		str[j++] = s[i++];
	if (j == len)
		str[j] = '\0';
	return (str);
}
