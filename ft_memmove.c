/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:54:38 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 18:21:50 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*ts;
	char		*td;
	size_t		i;

	i = 0;
	td = dest;
	ts = src;
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		while (n--)
		{
			td[i] = ts[i];
			i++;
		}
	}
	else
	{
		while (n--)
			*(td + n) = *(ts + n);
	}
	return (dest);
}
