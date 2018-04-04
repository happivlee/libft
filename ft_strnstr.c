/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:13:46 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 20:19:32 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;

	nlen = ft_strlen(needle);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len >= nlen)
	{
		if (strncmp(haystack, needle, nlen) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
