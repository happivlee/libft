/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 19:40:37 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 18:09:49 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	cpy1 = (unsigned char *)s1;
	cpy2 = (unsigned char *)s2;
	while (n)
	{
		if (*cpy1 != *cpy2)
			return (*cpy1 - *cpy2);
		cpy1++;
		cpy2++;
		n--;
	}
	return (0);
}
