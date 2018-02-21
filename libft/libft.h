/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:18:27 by vlee              #+#    #+#             */
/*   Updated: 2018/02/20 17:21:15 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h> //delete this before submitting!!
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str);
char  *ft_strdup(const char *s1);
char  *ft_strcpy(char *dst, const char *src);
char  *ft_strncpy(char *dst, const char *src, size_t len);

#endif
