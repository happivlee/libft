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

// void *ft_memccpy(void *dst, const void *src, int c, size_t n)
// {
//   size_t i;
//   unsigned char *dest;
//   unsigned const char *sourc;
//
//   i = 0;
//   dest = (unsigned char *)dst;
//   sourc = (unsigned char *)src;
//   while (i < n)
//   {
//     if (dest[i] == (unsigned char)c)
//     {
//       	return &dest[i + 1];
//     }
//     dest[i] = sourc[i];
//     i++;
//   }
//   return (NULL);
// }

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;
  unsigned char *dest;

  i = 0;
  dest = dst;
  while (i < n)
  {
	  *(dest) = *(unsigned char *)(src);
	  if (*(dest) == (unsigned char)c)
	  {
		  return (dest + 1);
	  }
	  i++;
	  dest++;
	  src++;
  }
  return (NULL);
}
