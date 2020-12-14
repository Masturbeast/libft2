/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:30:51 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 18:22:04 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t1;
	const char		*t2;

	if (!dest && !src)
		return (NULL);
	t1 = dest;
	t2 = src;
	while (n--)
		*t1++ = *t2++;
	return (dest);
}
