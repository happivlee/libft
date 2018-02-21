/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:37:40 by vlee              #+#    #+#             */
/*   Updated: 2018/02/20 18:37:42 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t i;

    i = 0;
    if(ft_strlen(src) > ft_strlen(dst))
        dst = (char *)malloc(sizeof(ft_strlen(src) + 1));
    while (i < len)
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = src[i];
    return dst;
}
