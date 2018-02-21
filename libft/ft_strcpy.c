/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:37:31 by vlee              #+#    #+#             */
/*   Updated: 2018/02/20 18:37:33 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strcpy(char *dst, const char *src)
{
  //may nee to allocate memory ONLY if src > dest in length, otherwise leave dest alone
    int i;
    int len_src;
    int len_dst;

    i = 0;
    len_src = ft_strlen(src);
    len_dst = ft_strlen(dst);
    if (len_src > len_dst)
        dst = (char *)malloc(sizeof((len) + 1));
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = src[i];
    return dst;
}
