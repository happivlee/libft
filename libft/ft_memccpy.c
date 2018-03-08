/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 17:54:11 by vlee              #+#    #+#             */
/*   Updated: 2018/03/07 17:54:12 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n) {
  int i;
  unsigned char *dest;
  unsigned const char *sourc;

  i = 0;
  dest = (unsigned char *)dst;
  sourc = (unsigned char *)src;
  //if the current value is c - end copy and return a pointer to the byte after the copy of c
  while (i < n)
  {
    if (src[i] == c)
    {
      i++;
      while (i > 0)
      {
          src++;
          i--;
      }
      return src;
    }
    dest[i] = sourc[i];
    i++;
  }
  //returns the pointer to nul?
  return (NULL);
}
