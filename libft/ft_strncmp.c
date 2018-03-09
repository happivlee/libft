/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 18:58:30 by vlee              #+#    #+#             */
/*   Updated: 2018/03/08 18:58:32 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    //while each value in both strings != null
    while(*s1 != '\0' && *s2 != '\0' && i < (n -1))
    {
        //check to see if they don't match
        if (*s1 != *s2)
            //return difference
            return (*s1 - *s2);
        //else
        else
        {
            //increment to check next letter
            s1++;
            s2++;
            i++;
        }
    //return difference
    }
    return (*s1 - *s2);
}
