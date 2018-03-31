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

// //counts the number of words in a string split by c
// int	ft_countwords(char const *s, char c)
// {
// 	int word_count;
//
// 	word_count = 0;
// 	while (*s != '\0')
// 	{
// 			while (*s == c)
// 			{
// 				s++;
// 			}
// 			if (*s != c)
// 			{
// 				word_count++;
// 				while (*s != c && *s != '\0')
// 				{
// 					s++;
// 				}
// 			}
// 	}
// 	return word_count;
// }

// //counts the number of each letter between char c
// int countchars(const char *s, int c)
// {
// 	int i;
// 	int len;
//
// 	i = 0;
// 	len = 0;
// 	while (s[i] == c)
// 	{
// 		i++;
// 	}
// 	while (s[i] != c && s[i] != '\0')
// 	{
// 		len++;
// 		i++;
// 	}
// 	return (len);
// }

//main strsplit function
char	**ft_strsplit(char const *s, char c)
{
	int total_word_count;
	int current_word;
	int str_index;
	int current_word_index;
	char **splitwords;

	//if no char c, return null - constraint
	if (!s || ft_strchr(s, c) == NULL)
		return (NULL);
	current_word = 0;
	str_index = 0;
	total_word_count = ft_countwords(s, c);
	//create a 2 dimensional array w/ room for the relevant number of words
	splitwords = (char **)malloc(sizeof(char *) * total_word_count + 1);
	//fill in each word
	while (current_word < total_word_count)
	{
		current_word_index = 0;
		//allocate memory == word length
		splitwords[current_word] = ft_strnew(ft_countchars(&s[str_index], c));
		//may need to do a protect??
		//increment str counter until it's not a c
		while (s[str_index] == c)
		{
			str_index++;
		}
		while (s[str_index] != c && s[str_index] != '\0')
		{
			//copy the str value up through the word length
			splitwords[current_word][current_word_index] = s[str_index];
			current_word_index++;
			str_index++;
		}
		splitwords[current_word][current_word_index] = '\0';
		current_word++;
	}
	splitwords[current_word] = NULL;
	return (splitwords);
}
