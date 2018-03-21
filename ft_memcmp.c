/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 19:40:37 by vlee              #+#    #+#             */
/*   Updated: 2018/03/14 19:40:40 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *cpy1;
	const char *cpy2;
	size_t i;

	cpy1 = (const char *)s1;
	cpy2 = (const char *)s2;
	i = 0;
	while(i < n)
	{
		//compare a copy of s1 and s2
		//if same
		if (*cpy1 != *cpy2)
			//return diff - should equal 0
			return (*cpy1 - *cpy2);
		cpy1++;
		cpy2++;
		i++;
	}
	return (0);
}
