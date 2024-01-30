/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:16:15 by daquino-          #+#    #+#             */
/*   Updated: 2023/10/04 12:07:56 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	l;
	int		lng;

	lng = ft_strlen(s);
	l = (char)c;
	str = (char *)s;
	while (lng >= 0)
	{
		if (str[lng] == l)
			return (&(str[lng]));
		lng --;
	}
	return (NULL);
}
