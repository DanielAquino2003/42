/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:56:30 by daquino-          #+#    #+#             */
/*   Updated: 2023/10/04 12:07:52 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	c;

	if (*ned == 0 || hay == ned)
		return ((char *)hay);
	c = ft_strlen(ned);
	while (*hay && c <= len--)
	{
		if (!(ft_strncmp((char *)hay, (char *)ned, c)))
			return ((char *)hay);
		hay ++;
	}
	return (NULL);
}
