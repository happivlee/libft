/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 18:38:35 by vlee              #+#    #+#             */
/*   Updated: 2018/03/08 18:38:52 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int ft_strcmp(const char *s1, const char *s2)
{
    //while each value in both strings != null
    while(*s1 != '\0' && *s2 != '\0')
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
        }
    //return difference
    }
    return (*s1 - *s2);
}
