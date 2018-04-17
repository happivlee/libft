/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:25:11 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 22:28:37 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		curr_word;
	int		str_index;
	int		curr_word_index;
	char	**splitwords;

	if (!s)
		return (NULL);
	curr_word = -1;
	str_index = 0;
	if (!(splitwords = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1))))
		return (NULL);
	while (s[str_index] && curr_word++ < wordcount(s, c))
	{
		curr_word_index = 0;
		if (!(splitwords[curr_word] = ft_strnew(charcount(&s[str_index], c))))
			return (NULL);
		while (s[str_index] && s[str_index] == c && s[str_index] != '\0')
			str_index++;
		while (s[str_index] && s[str_index] != c && s[str_index] != '\0')
		{
			splitwords[curr_word][curr_word_index++] = s[str_index++];
		}
	}
	splitwords[curr_word] = NULL;
	return (splitwords);
}
