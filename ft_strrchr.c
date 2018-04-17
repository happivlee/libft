/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 16:10:31 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:43:04 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	len = ft_strlen(s);
	tmp = (char *)s;
	while (len)
	{
		if (tmp[len] == c)
			return (&tmp[len]);
		len--;
	}
	return (NULL);
}
