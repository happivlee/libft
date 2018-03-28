/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:25:11 by vlee              #+#    #+#             */
/*   Updated: 2018/03/27 17:25:18 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_countwords(char const *s, char c)
{
	//while the string isn't NULL
		//if the string value == c
			//while it's c
				//increment index
			//while it's not c
				//increment word count
				//increment index

	//return word count
}

char	**ft_strsplit(char const *s, char c)
{
	int wordcount;
	int i;
	char **splitwords;

	i = 0;
	wordcount = ft_countwords(s, c);
	while (i < wordcount)
	{
		//strncpy the part that's non c 	- do after the word count
		splitwords[0] = ft_strcpy(__);
	}
}
