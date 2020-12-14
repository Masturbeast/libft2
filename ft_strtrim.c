/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 15:01:48 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 19:51:37 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checkset(char const *s1, char const *set, int index)
{
	int i;

	i = 0;
	while (set && s1 && set[i])
	{
		if (set[i] == s1[index])
			return (1);
		i++;
	}
	return (0);
}

static char		*ft_error(void)
{
	char *dest;

	dest = NULL;
	if (!(dest = malloc(sizeof(char) * 1)))
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	min;
	size_t	max;
	size_t	i;
	size_t	index;
	char	*dest;

	i = 0;
	max = ft_strlen(s1) - 1;
	min = 0;
	dest = NULL;
	while (ft_checkset(s1, set, max) == 1 && max > 0)
		max--;
	while (ft_checkset(s1, set, min) == 1 && min < ft_strlen(s1))
		min++;
	if (ft_strlen(s1) - min == 0)
		return (ft_error());
	if (!(dest = malloc(sizeof(char) * (max - min + 2))))
		return (NULL);
	index = min;
	while (index <= max)
		dest[i++] = (char)s1[index++];
	dest[i] = '\0';
	return (dest);
}
