/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 15:17:33 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 17:13:35 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strnew;
	unsigned int	i;
	int				len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	strnew = (char *)malloc(sizeof(char) * len + 1);
	if (strnew == 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
