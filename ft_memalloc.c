/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 17:11:05 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 17:05:46 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *new_mem;

	new_mem = malloc(size);
	if (new_mem != NULL)
	{
		ft_memset(new_mem, 0, size);
	}
	return (new_mem);
}
