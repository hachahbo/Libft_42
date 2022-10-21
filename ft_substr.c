/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hachahbo <hachahbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:05:40 by hachahbo          #+#    #+#             */
/*   Updated: 2022/10/17 18:41:17 by hachahbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	j;
	size_t	x;

	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	x = ft_strlen(s);
	i = start;
	j = 0;
	while (len != 0 && j < len && i < x)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
