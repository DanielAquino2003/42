/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:56:35 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:08:07 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	tam;
	char	*sub;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	tam = ft_strlen(s + start);
	if (tam < len)
		len = tam;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	count = 0;
	while (count < len)
	{
		sub[count] = s[start + count];
		count++;
	}
	sub[count] = '\0';
	return (sub);
}
