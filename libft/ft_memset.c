/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 17:01:30 by vlee              #+#    #+#             */
/*   Updated: 2018/03/06 17:01:33 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int x, size_t n) {
  int i;
  unsigned char *tmp;

  i = 0;
  tmp = (unsigned char*)ptr;
  //starting from the pointer
  while (i < n)
  {
    //fill x for n number of bytes
    *tmp = (unsigned char)x;
    tmp++;
    i++;
  }
  return (ptr);
}
