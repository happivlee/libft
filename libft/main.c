/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:52:17 by vlee              #+#    #+#             */
/*   Updated: 2018/02/20 15:55:26 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int main(void)
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
    // len = 4;
    // printf("%s\n", ft_strncpy("test", "whoa", len)); //same length src & dest - whoa
    // len = 4;
    // printf("%s\n", ft_strncpy("hello", "Ha", len)); //src is shorter than dest - num greater than dest? - Ha
    // len = 3;
    // printf("%s\n", ft_strncpy("World", "Sleepy", len)); //src longer than dest, but len = 3 ? - Sle
    // len = 6;
    // printf("%s\n", ft_strncpy("$M$Y@JH", "GJ$@Y(GKWHM)", len)); //src longer than dest w/ rando symbols - GJ$@Y(
    // len = 2;
    // printf("%s\n", ft_strncpy("sup", "yoo", len)); //easy - yo
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
    // printf("%zu\n", ft_strlcat(lcat1, lcat2, 4)); //size also accounts for NUL
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
    char memccpy_dest1[50];
    const char memccpy_src1[50] = "Hallelujah";
    printf("test #1 before ft_memccpy: %s\n", memccpy_dest1);
    ft_memccpy(memccpy_dest1, memccpy_src1, "e", 6); //test for when it finds c
    printf("after ft_memccpy: %s\n", memccpy_dest1);
    char memccpy_dest2[50];
    const char memccpy_src2[50] = "Party time!";
    printf("test #2 before ft_memccpy: %s\n", memccpy_dest2);
    ft_memccpy(memccpy1, memccpy2, "s", 6); //test for when it doesn't find c
    printf("after ft_memccpy: %s\n", memccpy_dest2);
    return (0);
}
