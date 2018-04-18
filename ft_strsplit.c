/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:25:11 by vlee              #+#    #+#             */
/*   Updated: 2018/04/17 17:17:35 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		curr_word;
	int		str_index;
	int		curr_word_index;
	char	**wordlist;

	if (!s)
		return (NULL);
	curr_word = 0;
	str_index = 0;
	if (!(wordlist = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1))))
		return (NULL);
	while (s[str_index] && curr_word < ft_wcount(s, c))
	{
		curr_word_index = 0;
		if (!(wordlist[curr_word] = ft_strnew(ft_ccount(&s[str_index], c))))
			return (NULL);
		while (s[str_index] && s[str_index] == c && s[str_index] != '\0')
			str_index++;
		while (s[str_index] && s[str_index] != c && s[str_index] != '\0')
			wordlist[curr_word][curr_word_index++] = s[str_index++];
		curr_word++;
	}
	wordlist[curr_word] = NULL;
	return (wordlist);
}
