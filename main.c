/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:52:17 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:50:34 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	main(void)
{
    // printf("%zu\n", ft_strlen("hi"));
    // printf("%zu\n", ft_strlen("world"));
    // printf("%zu\n", ft_strlen(""));
    // printf("%zu\n", ft_strlen("n45yjnmu5"));
    // printf("%s\n", ft_strdup("test"));
    // printf("%s\n", ft_strdup("hello"));
    // printf("%s\n", ft_strdup("World"));
    // printf("%s\n", ft_strdup("$M$Y@JH"));
    // printf("%s\n", ft_strdup("sup"));
    // char s1[6] = "hello";
    // char s2[6] = "world";
    // printf("%s\n", ft_strcpy(s1, s2)); //same length src & dest
    // char s3[6] = "hello";
    // char s4[3] = "Ha";
    // printf("%s\n", ft_strcpy(s3, s4)); //src is shorter than dest
    // char s5[6] = "World";
    // char s6[7] = "Sleepy";
    // printf("%s\n", ft_strcpy(s5, s6)); //what about src longer than dest?
    // char s7[8] = "$M$Y@JH";
    // char s8[13] = "GJ$@Y(GKWHM)";
    // printf("%s\n", ft_strcpy(s7, s8)); //src longer than dest & rando symbols
    // char s9[4] = "sup";
    // char s10[4] = "yoo";
    // printf("%s\n", ft_strcpy(s9, s10)); //easy
    // size_t len;
    // size_t len1 = 4;
    // printf("%s\n", ft_strncpy("test", "whoa", len1)); //same length src & dest - whoa
    // size_t len2 = 4;
    // printf("%s\n", ft_strncpy("hello", "Ha", len2)); //src is shorter than dest - num greater than dest? - Ha
    // size_t len3 = 3;
    // printf("%s\n", ft_strncpy("World", "Sleepy", len3)); //src longer than dest, but len = 3 ? - Sle
    // size_t len4 = 6;
    // printf("%s\n", ft_strncpy("$M$Y@JH", "GJ$@Y(GKWHM)", len4)); //src longer than dest w/ rando symbols - GJ$@Y(
    // size_t len5 = 2;
    // printf("%s\n", ft_strncpy("sup", "yoo", len5)); //easy - yo
    // ft_putchar('s');
    // ft_putchar('t');
    // ft_putchar('o');
    // ft_putchar('p');
    // ft_putchar('!');
    // ft_putchar('\n');
    // ft_putstr("hello");
    // ft_putchar('\n');
    // ft_putstr("world");
    // ft_putchar('\n');
    // ft_putstr("out");
    // ft_putchar('\n');
    // ft_putstr("there");
    // ft_putchar('\n');
    // ft_putnbr(95035);
    // ft_putchar('\n');
    // ft_putnbr(-42);
    // ft_putchar('\n');
    // ft_putnbr(0);
    // ft_putchar('\n');
    // ft_putnbr(6);
    // ft_putchar('\n');
    // char cat1[6] = "hello";
    // char cat2[7] = "world!";
    // printf("%s\n", ft_strcat(cat1, cat2));
    // char ncat1[9] = "lollipop"; //still need to test
    // char ncat2[8] = "sticker";
    // printf("%s\n", ft_strncat(ncat1, ncat2, 5));
    // char join1[4] = "hot";     //still need to test
    // char join2[6] = "cocoa";
    //printf("%s\n", ft_strjoin(join1, join2));
    // char lcat1[4] = "Kit";
    // char lcat2[10] = "Katherine";
    // printf("%zu\n", ft_strlcat(lcat1, lcat2, 3));
    // char mem1[11] = "'--------'\0";
    // printf("before memset: %s\n", mem1);
    // ft_memset(mem1 + 1, '.', 8*sizeof(char));
    // printf("after memset: %s\n", mem1);
    // char bz1[5] = "holi\0";
    // printf("before bzero: %s\n", bz1);
    // ft_bzero(bz1, 2);
    // printf("after bzero: %s\n", bz1);
    // char memcpy1[50];
    // const char memcpy2[50] = "Hallelujah";
    // printf("before ft_memcpy: %s\n", memcpy1);
    // ft_memcpy(memcpy1, memcpy2, 6);
    // printf("after ft_memcpy: %s\n", memcpy1);
    // char memccpy_dest1[50];//                         still need to finish memccpy
    // const char memccpy_src1[50] = "Hallelujah";
    // printf("test #1 before ft_memccpy: %s\n", memccpy_dest1);
    // ft_memccpy(memccpy_dest1, memccpy_src1, "e", 6); //test for when it finds c
    // printf("after ft_memccpy: %s\n", memccpy_dest1);
    // char memccpy_dest2[50];
    // const char memccpy_src2[50] = "Party time!";
    // printf("test #2 before ft_memccpy: %s\n", memccpy_dest2);
    // ft_memccpy(memccpy1, memccpy2, "s", 6); //test for when it doesn't find c
    // printf("after ft_memccpy: %s\n", memccpy_dest2);
    // char cmp1[5] = "baby\0";
    // char cmp2[7] = "babies\0";
    // printf("difference bet baby and babies: %i\n", ft_strcmp(cmp1, cmp2));
    // char ncmp1[5] = "Hera\0";
    // char ncmp2[7] = "Heresy\0";
    // printf("difference bet Hera and Heresy: %i\n", ft_strncmp(ncmp1, ncmp2, 3));
    // char ncmp3[5] = "Hera\0";
    // char ncmp4[7] = "Heresy\0";
    // printf("difference bet Hera and Heresy: %i\n", ft_strncmp(ncmp3, ncmp4, 5));
    // printf("toupper test with v: %c\n", ft_toupper('v'));
    // printf("toupper test with R: %c\n", ft_toupper('R'));
    // printf("toupper test with 5: %c\n", ft_toupper('5'));
    // printf("toupper test with *: %c\n", ft_toupper('*'));
    // printf("tolower test with v: %c\n", ft_tolower('v'));
    // printf("tolower test with R: %c\n", ft_tolower('R'));
    // printf("tolower test with 5: %c\n", ft_tolower('5'));
    // printf("tolower test with *: %c\n", ft_tolower('*'));
    // char chr1[6] = "hello\0";
    // printf("%s\n", ft_strchr(chr1, 'l'));
    // char rchr1[9] = "Pochacco\0";
    // printf("%s\n", ft_strrchr(rchr1, 'c'));
    // char stack1[13] = "pineappleapp\0";
    // char needle1[4] = "app\0";
    // printf("%s\n", ft_strstr(stack1, needle1));
    // char nstack1[13] = "pineapleapp\0";
    // char nneedle1[4] = "app\0";
    // printf("should be NULL: %s\n", ft_strnstr(nstack1, nneedle1, 6));
    // printf("should show 'app': %s\n", ft_strnstr(nstack1, nneedle1, 13));
    // printf("should be 1: %d\n", ft_isalpha('a'));
    // printf("should be 1: %d\n", ft_isalpha('F'));
    // printf("should be 0: %d\n", ft_isalpha('8'));
    // printf("should be 0: %d\n", ft_isdigit('a'));
    // printf("should be 1: %d\n", ft_isdigit('7'));  //can it not take 7 as opposed to '7'?
    // printf("should be 1: %d\n", ft_isdigit('8'));
    // printf("isalnum should return 1: %d\n", ft_isalnum('H'));
    // printf("isalnum should return 1: %d\n", ft_isalnum('i'));
    // printf("isalnum should return 1: %d\n", ft_isalnum('8'));
    // printf("isalnum should return 0: %d\n", ft_isalnum('.'));
    // printf("isascii should return 1: %d\n", ft_isascii('H'));
    // printf("isascii should return 1: %d\n", ft_isascii('i'));
    // printf("isascii should return 1: %d\n", ft_isascii('8'));
    // printf("isascii should return 1: %d\n", ft_isascii('.'));  //may need to test integers between 122 and 177
	// printf("isprint should return 1: %d\n", ft_isprint('H'));
    // printf("isprint should return 1: %d\n", ft_isprint('i'));
    // printf("isprint should return 1: %d\n", ft_isprint('}'));
    // printf("isprint should return 0: %d\n", ft_isprint(28));
	// char mmovedst[7] = "tomboy\0";
	// char mmovesrc[4] = "cat\0";
	// printf("destination before: %s\n", mmovedst);
	// printf("source before: %s\n", mmovesrc);
	// ft_memmove(mmovedst + 3, mmovesrc, 3);
	// printf("destination after: %s\n", mmovedst);
	// printf("source after: %s\n", mmovesrc);
	// char memchr1[9] = "firework\0";
	// printf("the first letter match begins at: %s\n",ft_memchr(memchr1,'w',6));
	// printf("memchr should return NULL: %s\n",ft_memchr(memchr1,'w', 3));
	// char mcmp1[10] = "boobytrap\0";
	// char mcmp2[9] = "booboo\0\0\0";
	// char mcmp3[11] = "booboo\0bop\0";
	// printf("should be the same - therefore - '0': %d\n", ft_memcmp(mcmp1, mcmp2, 4));
	// printf("should be different - therefore - 'y - o': %d\n", ft_memcmp(mcmp1, mcmp2, 6));
	// printf("comparing w/ strncmp - should be zero: %d\n", ft_strncmp(mcmp2, mcmp3, 8));
	// printf("comparing w/ memcmp - should be non - zero: %d\n", ft_memcmp(mcmp2, mcmp3, 8));
	// printf("using atoi: %d\n", atoi("\n +900"));
	// printf("using ft_atoi: %d\n", ft_atoi("\n +900"));
	//int	ft_countwords(char const *s, char c)
	// char cw_string[12] = "hello there\0";
	// printf("number of words: %d\n", ft_countwords(cw_string, ' '));
	// char cc_string[7] = "hello \0";
	// printf("number of chars: %d\n", ft_countchars(cc_string, ' '));
	// char **splitwords;
	// // char ss_string[41] = "      split       this for   me  !       ";
	// char ss_test[1] = "";
	// char	**ret = (char*[6]){"split", "this", "for", "me", "!", NULL};
	// splitwords = ft_strsplit(ss_string, ' ');
	// int cmp_res = 0;
	// cmp_res = strcmp(splitwords[5], NULL);
	// printf("cmp_res in NULL = %d\n", cmp_res);
	// cmp_res = 0;
	// int word = 0;
	// while (word < 6)
	// {
	// 	cmp_res = ft_strcmp(splitwords[word], ret[word]);
	// 	printf("cmp_res = %d\n", cmp_res);
	// 	printf("the %dth word after being split: %s\n", word, splitwords[word]);
	// 	word++;
	// // }
	// splitwords = ft_strsplit(ss_test, ' ');
	// 	printf("the word we're accessing: %s", splitwords[1]);
	// printf("result of itoa: %s\n", ft_itoa(42));
	// printf("result of itoa: %s\n", ft_itoa(101));
	//printf("result of itoa: %s\n", ft_itoa(-2147483648));
	// printf("result of itoa: %s\n", ft_itoa(0));
	// int content0 = 5;
	// size_t content_size0 = 4;
	// t_list *lst0 = ft_lstnew(&content0, content_size0);
	// printf("list content is: %d\n", *((int *)lst0->content));
	// int content1 = 50;  //attempt to test lstdelone - but don't know how to create a del function
	// size_t content_size1 = 4;
	// t_list *lst1 = ft_lstnew(&content1, content_size1);
	// lst0->next = lst1;
	// ft_lstdelone(lst0,)
	return (0);
}
