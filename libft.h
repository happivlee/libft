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

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}		t_list;

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
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
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);
void *ft_memalloc(size_t size);
void ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_stiter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(char const *s, char c);
int	ft_countwords(char const *s, char c);
int ft_countchars(const char *s, int c);
char *ft_itoa(int n);
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

#endif
