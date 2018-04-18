/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wordcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:42:18 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 23:42:23 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char const *s, char c)
{
	int word_count;

	word_count = 0;
	while (*s != '\0')
	{
		while (*s == c)
		{
			s++;
		}
		if (*s && *s != c)
		{
			word_count++;
			while (*s != c && *s != '\0')
			{
				s++;
			}
		}
	}
	return (word_count);
}
