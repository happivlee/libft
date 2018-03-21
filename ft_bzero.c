/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:58:15 by vlee              #+#    #+#             */
/*   Updated: 2018/03/07 16:03:06 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//may need to include strings.h

void ft_bzero(void *s, size_t n) {
  if (n == 0)
      return;
  //writes n zeroed bytes to the string s
  size_t i;
  char *tmp;

  i = 0;
  tmp = (char *)s;
  while (i < n)
  {
    *tmp = 0;
    tmp++;
    i++;
  }
}

// void ft_bzero(void *s, size_t n) {
// 	char *i;
//
// 	i = s;
// 	while (n)
// 	{
// 		*i = 0;
// 		i++;
// 		n--;
// 	}
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t	i;
// 	char	*ptr;
//
// 	i = 0;
// 	ptr = s;
// 	while (i < n)
// 	{
// 		*(ptr + i) = 0;
// 		i++;
// 	}
// }
