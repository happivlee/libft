/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:08:49 by vlee              #+#    #+#             */
/*   Updated: 2018/03/30 16:09:20 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int word_count;

	word_count = 0;
	while (*s != '\0')
	{
			while (*s == c)
			{
				s++;
			}
			if (*s != c)
			{
				word_count++;
				while (*s != c && *s != '\0')
				{
					s++;
				}
			}
	}
	return word_count;
}
