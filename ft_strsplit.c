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

	if (!s)
		return (NULL);
	current_word = 0;
	str_index = 0;
	total_word_count = ft_countwords(s, c);
	if (!(splitwords = (char **)malloc(sizeof(char *) * total_word_count + 1)))
		return (NULL);
	while (s[str_index] && current_word < total_word_count)
	{
		current_word_index = 0;
		if (!(splitwords[current_word] = ft_strnew(ft_countchars(&s[str_index], c))))
			return (NULL);
		while (s[str_index] && s[str_index] == c && s[str_index] != '\0')
		{
			str_index++;
		}
		while (s[str_index] && s[str_index] != c && s[str_index] != '\0')
		{
			//copy the str value up through the word length
			//write(1, s + str_index, 1);
			splitwords[current_word][current_word_index] = s[str_index];
			//write(1, splitwords[current_word] + current_word_index, 1);
			current_word_index++;
			str_index++;
		}
		//printf("%i: {%s}\n", total_word_count, splitwords[current_word]);
		current_word++;
	}
	splitwords[total_word_count] = NULL;
	//if(splitwords[total_word_count] == NULL) {
		//printf("yay!");
	//}
	return (splitwords);
}
/*
void			test_ft_strsplit_basic() {

	char	**ret = (char*[6]){"split", "this", "for", "me", "!", NULL};


			char	*s = "      split       this for   me  !       ";

			char	**r = ft_strsplit(s, ' ');
			while (*r) {
				write(1, "wooo\n", 5);
				printf("TEST_FAILED_ON: {%s,%s}\n",*ret, *r);
				if (strcmp(*r, *ret)) {
					printf("TEST_FAILED_ON: {%s,%s}\n",*ret, *r);
				}
				r++;
				ret++;
			}
			printf("TEST_SUCCESS\n");

}

void			test_ft_strsplit_space() {
	char	**ret = (char*[1]){NULL};


			char	*s = "                  ";

			char	**r = ft_strsplit(s, ' ');
			while (*r) {
				if (strcmp(*r, *ret)) {
					printf("TEST_FAILED_ON: {%s,%s}\n", *ret, *r);
				}
				r++;
				ret++;
			}
			printf("TEST_SUCCESS\n");
}

void			test_ft_strsplit_end() {

	char	**ret = (char*[2]){"olol", NULL};

	char	*s = "olol                     ";

			char	**r = ft_strsplit(s, ' ');
			while (*r) {
				if (strcmp(*r, *ret)) {
					printf("TEST_FAILED_ON: {%s,%s}\n", *ret, *r);
				}
				r++;
				ret++;
			}
			printf("TEST_SUCCESS\n");
}

void			test_ft_strsplit_zero() {
	char	**ret = (char*[6]){"split", "this", "for", "me", "!", NULL};
	char	*s = "      split       this for   me  !       ";


			char	**r = ft_strsplit(s, ' ');

			while (*r) {
				if (strcmp(*r, *ret)) {
					printf("TEST_FAILED_ON: {%s:%s}\n", *r, *ret);
				}
				r++;
				ret++;
			}
			printf("TEST_SUCCESS\n");
}

void			test_ft_strsplit_null() {
			char	**ret = ft_strsplit(NULL, ' ');
			if (!ret)
				printf("TEST_SUCCESS\n");
			else
				printf("TEST_FAILED\n");
}

int main(void) {
	test_ft_strsplit_basic();
	test_ft_strsplit_space();
	test_ft_strsplit_end();
	test_ft_strsplit_zero();
	test_ft_strsplit_null();
	return (0);
}
*/
