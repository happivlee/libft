/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 18:23:35 by vlee              #+#    #+#             */
/*   Updated: 2018/03/12 18:23:36 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int len;
    int needle_len;
    int i;
    int j;
    char *match;

    len = ft_strlen(haystack);
    needle_len = ft_strlen(needle);
    i = 0;
    j = 0;
    match = NULL;
    if (needle_len == 0)
        return (haystack);
    while (haystack[i] != '\0')
    {
        if(haystack[i] == needle[j])
        {
            match = &haystack[i];
            while(haystack[i] == needle[j])
            {
                i++;
                j++;
                if(needle[j] == '\0')
                    return match;
            }
        }
        else
        {
            i++;
            j = 0;
            match = 0;
        }
    }
    return (match);
}

//while haystack isn't NULL
    //check to see if haystack[i] == needle[j]
        //if needle[j] == ''\0'
            //return match;
        //i++
        //j++
    //else
        //j=0
        //match = NULL;
        //i++
