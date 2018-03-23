/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:44:05 by vlee              #+#    #+#             */
/*   Updated: 2018/03/22 18:44:08 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memdel(void **ap)
{
	//take the address of a pointer to memory (the param) and FREE it
	if (ap != NULL)
	{
		free(*ap);
		//set pointer to NULL
		*ap = NULL;
	}
}
