/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:10:13 by daquino-          #+#    #+#             */
/*   Updated: 2023/10/04 12:07:33 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_size;
	size_t	src_size;
	size_t	rest;
	char	*str;

	str = (char *)src;
	rest = 0;
	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size > dest_size)
		rest = src_size + dest_size;
	else
		rest = src_size + size;
	while (str[i] && (dest_size + 1) < size)
	{
		dest[dest_size] = str[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (rest);
}
