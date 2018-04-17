/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 15:39:27 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:07:29 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *tmp;

	tmp = (const char *)s;
	while (*tmp != '\0')
	{
		if ((char)c == *tmp)
			return (char *)tmp;
		tmp++;
	}
	if (*tmp == (char)c)
		return (char *)tmp;
	return (NULL);
}
