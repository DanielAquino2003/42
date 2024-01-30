/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:42:56 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:39 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				l;
	unsigned char	*result;
	unsigned char	a;

	l = n;
	result = (unsigned char *)s;
	a = (unsigned char)c;
	while (l > 0)
	{
		if (*result == a)
			return (result);
		result ++;
		l --;
	}
	return (NULL);
}
