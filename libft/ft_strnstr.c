/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:13:46 by vlee              #+#    #+#             */
/*   Updated: 2018/03/12 19:13:48 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;

    i = 0;
    //while the current searched is less than or equal to the search len allowed
    while (i < len)
    {
      //check to see if haystack[i] = needle[0]
      if (haystack[i] == needle[0])
      {
          if (strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
              return &haystack[i];
      }
      i++;
    }
    return (NULL);
}
