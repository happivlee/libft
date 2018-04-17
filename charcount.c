/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:24:15 by vlee              #+#    #+#             */
/*   Updated: 2018/04/03 17:02:29 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcount(const char *s, int c)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}