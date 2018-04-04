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

// size_t ft_strlcat(char *dest, const char*src, size_t dstsize)
// {
// 	size_t dlen;
// 	size_t slen;
// 	size_t i;
//
//   dlen = ft_strlen(dest);
//   slen = ft_strlen(src);
//   i = 0;
//   while (ft_strlendstsize && src[i])
//   {
//     dest[dlen] = src[i];
//     dlen++;
// 	i++;
// 	dstsize--;
//   }
//   dest[dlen] = '\0';
//   //printf("%s\n", dest);
//   //printf("%s\n", dest); for testing only
//   return (dlen + slen);
// }

size_t ft_strlcat(char *dest, const char*src, size_t dstsize)
{
	size_t dlen;
	size_t slen;
	size_t i;
	size_t j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = ft_strlen(dest);
	i = 0;
	while (j < dstsize - 1)
	{
		if(src[i])
		{
			dest[j] = src[i];
			j++;
			i++;
		}
	}
	dest[j] = '\0';
	//printf("%s\n", dest);
	//printf("%s\n", dest); for testing only
	return (dlen + slen);
}
