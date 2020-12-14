/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:54:35 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 20:04:51 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int i;

	i = 0;
	if (!*str)
	{
		if (*str == *to_find)
			return ((char*)str);
		else
			return (NULL);
	}
	while (*str)
	{
		if (ft_strnequ(to_find, str, ft_strlen(to_find)))
			if (ft_strlen(to_find) + i <= n)
				return ((char*)str);
		i++;
		str++;
	}
	return (NULL);
}
