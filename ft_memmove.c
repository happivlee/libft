/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 20:13:17 by vlee              #+#    #+#             */
/*   Updated: 2018/03/13 20:13:20 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	//need to make copies of both strings
	char *pd;
	char *ps;
	char *tmp[len];
	size_t i;

	pd = (char *)dst;
	ps = (char *)src;
	i = 0;

	while( i < len )
	{
		tmp[i] = &ps[i];
		i++;
	}
	i = 0;
	while (len > 0)
	{
		*pd = *tmp[i];
		pd++;
		i++;
		len--;
	}
	//return pointer to the original str dst's value
	return dst;
}
