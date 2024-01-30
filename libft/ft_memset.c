/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:34:33 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:53 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, int l)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) a;
	i = 0;
	while (i < l)
		str[i++] = (unsigned char)b;
	return (a);
}
