/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:38:29 by vlee              #+#    #+#             */
/*   Updated: 2018/02/20 18:38:32 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char*src, size_t size)
{
  int i;
  size_t j;

  i = ft_strlen(dest);
  j = 0;
  //concats to end of dest up to size given
  while (j < size - 1)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  //null terminated
  dest[i] = '\0';
  //returns the str
  //printf("%s\n", dest); for testing only
  return ft_strlen(dest);
}
