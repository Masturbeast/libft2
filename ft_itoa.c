/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:17:06 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 20:02:02 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strnew(size_t size)
{
	char *newstr;

	newstr = (char *)malloc(sizeof(char) * (size + 1));
	if (newstr == 0)
		return (NULL);
	ft_bzero(newstr, size + 1);
	return (newstr);
}

static size_t	ft_itoa_length(int n)
{
	size_t			len;
	unsigned int	nb;

	len = 1;
	if (n < 0)
	{
		len++;
		nb = (unsigned int)(-n);
	}
	else
		nb = (unsigned int)n;
	if (nb >= 10)
		len += ft_itoa_length((int)(nb / 10));
	return (len);
}

char			*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	size_t			i;

	i = 1;
	if ((res = ft_strnew(ft_itoa_length(n))) == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		nb = (unsigned int)(-n);
	}
	else
		nb = (unsigned int)n;
	while (nb >= 10)
	{
		res[ft_itoa_length(n) - i++] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	res[ft_itoa_length(n) - i] = (char)(nb + 48);
	return (res);
}
