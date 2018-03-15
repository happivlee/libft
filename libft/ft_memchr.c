/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 18:51:37 by vlee              #+#    #+#             */
/*   Updated: 2018/03/14 18:51:39 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *tmp;

	tmp = (char *)s;
	while (n)
	{
		//check string s for an occurance of c within n byte
		if (*tmp == c)
		//returns a pointer to the byte located,
			return tmp;
		tmp++;
		n--;
	}
	return (NULL);
}
