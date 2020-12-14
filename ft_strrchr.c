/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:31:51 by atep              #+#    #+#             */
/*   Updated: 2018/12/12 16:42:51 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*t;

	i = ft_strlen(str);
	t = (char*)str + i;
	while (*t != (char)c && i--)
		t--;
	if (*t == (char)c)
		return ((char *)(str + i));
	else
		return (NULL);
}
