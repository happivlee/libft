/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:02:35 by vlee              #+#    #+#             */
/*   Updated: 2018/03/01 16:02:45 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  int lens1;
  int lens2;
  char *new;

  lens1 = ft_strlen(s1);
  lens2 = ft_strlen(s2);
  new = (char *)malloc(sizeof(lens1 + lens2 + 1));
  new = ft_strcpy(new, s1);
  new = ft_strcat(new, s2);
  return new;
}
