/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 20:13:17 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 18:44:09 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pd;
	const unsigned char	*ps;
	size_t				i;

	pd = dst;
	ps = src;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (len--)
		{
			pd[len] = ps[len];
		}
	}
	return (dst);
}
