/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:21:37 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:49 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*tmp;
	unsigned const char	*str;

	i = -1;
	tmp = dst;
	str = src;
	if (!dst && !src)
		return (0);
	if (dst < src)
		while (++i < n)
			tmp[i] = str[i];
	else
		while (++i < n)
			tmp[n - 1 - i] = str[n - 1 - i];
	return (dst);
}
