/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:18:27 by vlee              #+#    #+#             */
/*   Updated: 2018/02/27 15:40:09 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h> //delete this before submitting!!
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char  *ft_strncat(char *s1, const char *s2, size_t n);
void  ft_putchar(char c);
void	ft_putstr(char *s);
void  ft_putchar_fd(char c, int fd);
void  ft_putnbr(int nbr);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t size);
void *ft_memset(void *ptr, int x, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
int   ft_strcmp(const char *s1, const char *s2);
int   ft_strncmp(const char *s1, const char *s2, size_t n);
int   ft_toupper(int c);
int   ft_tolower(int c);

#endif
