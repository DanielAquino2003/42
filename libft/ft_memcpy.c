/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:14:44 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:46 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int len)
{
	void	*dst2;
	int		i;

	i = len;
	if (!src && !dst)
		return (NULL);
	dst2 = dst;
	while (i--)
		*((char *)dst++) = *((char *)src++);
	return (dst2);
}
