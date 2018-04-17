/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 16:38:31 by vlee              #+#    #+#             */
/*   Updated: 2018/04/16 20:47:08 by vlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*result;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	if (i == len)
		return (ft_strnew(0));
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
	{
		len--;
	}
	result = ft_memalloc(len - i + 1);
	if (result == NULL)
		return (NULL);
	result = ft_strncpy(result, &s[i], len - i);
	result[len - i + 1] = '\0';
	return (result);
}
