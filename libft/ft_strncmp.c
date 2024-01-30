/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:36:37 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:07:48 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t			i;
	unsigned char	u1;
	unsigned char	u2;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		u1 = (unsigned char)s1[i];
		u2 = (unsigned char)s2[i];
		if (u1 != u2)
			return ((int)(u1 - u2));
		i++;
	}
	if (i == n)
		return (0);
	return ((int)(((unsigned char)s1[i] - (unsigned char)s2[i])));
}
