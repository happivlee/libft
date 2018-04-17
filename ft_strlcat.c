/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:38:29 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:36:50 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= dstsize)
		return (dstsize + slen);
	ft_strncpy(dest + dlen, src, dstsize - dlen - 1);
	dest[dstsize - 1] = '\0';
	return (dlen + slen);
}
