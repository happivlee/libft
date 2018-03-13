/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 15:39:27 by vlee              #+#    #+#             */
/*   Updated: 2018/03/12 15:39:43 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *tmp;

    tmp = (const char *)s;
    //returns a pointer to the char location if char c is found
    while (*tmp != '\0')
    {
      if (c == *tmp)
          return tmp;
      tmp++;
    }
    if (*tmp == '\0')
        return tmp;
    //points to NULL if charactoer not found
    else
        return NULL;
}
