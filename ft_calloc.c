/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atep <atep@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:41:17 by atep              #+#    #+#             */
/*   Updated: 2020/01/30 20:01:20 by atep             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *new;

	new = (void*)malloc(sizeof(char) * nmemb * size);
	if (new == 0)
		return (NULL);
	ft_bzero(new, size * nmemb);
	return (new);
}
