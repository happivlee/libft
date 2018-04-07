/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 15:54:14 by vlee              #+#    #+#             */
/*   Updated: 2018/04/06 15:54:22 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(char *s)
{
	int len;
	int i;
	char *result;

	len = ft_strlen(s);
	result = ft_strdup(s);
	i = 0;
	while (len)
	{
		result[i] = s[len];
		i++;
		len--;
	}
	return result;
}
