/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 17:02:06 by vlee              #+#    #+#             */
/*   Updated: 2018/03/07 17:02:09 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *dest;
    unsigned const char *sourc;

    i = 0;
    dest = (unsigned char *)dst;
    sourc = (unsigned char *)src;
    // while(i < n)
    // {
    //   dest = (unsigned char *)sourc;
    //   dest++;
    //   sourc++;
    //   i++;
    // }
    while (i < n)
    {
      dest[i] = sourc[i];
      i++;
    }
    //returns the original value of dst?
    return (dst);
}

//https://github.com/yfuks/FDFv2/blob/master/libft/memcpy.c
//ask Cameron
