/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 17:02:06 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 18:40:39 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*sourc;

	i = 0;
	dest = (char *)dst;
	sourc = (char *)src;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
