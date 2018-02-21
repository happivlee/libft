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
    // printf("%s\n", ft_strcpy("test", "whoa")); //same length src & dest
    // printf("%s\n", ft_strcpy("hello", "Ha")); //src is shorter than dest
    // printf("%s\n", ft_strcpy("World", "Sleepy")); //what about src longer than dest?
    // printf("%s\n", ft_strcpy("$M$Y@JH", "GJ$@Y(GKWHM)")); //src longer than dest & rando symbols
    // printf("%s\n", ft_strcpy("sup", "yoo")); //easy
    size_t len;
    len = 4;
    printf("%s\n", ft_strncpy("test", "whoa", len)); //same length src & dest - whoa
    len = 4;
    printf("%s\n", ft_strncpy("hello", "Ha", len)); //src is shorter than dest - num greater than dest? - Ha
    len = 3;
    printf("%s\n", ft_strncpy("World", "Sleepy", len)); //src longer than dest, but len = 3 ? - Sle
    len = 6;
    printf("%s\n", ft_strncpy("$M$Y@JH", "GJ$@Y(GKWHM)", len)); //src longer than dest w/ rando symbols - GJ$@Y(
    len = 2;
    printf("%s\n", ft_strncpy("sup", "yoo", len)); //easy - yo
    return (0);
}
