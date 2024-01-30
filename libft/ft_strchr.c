/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:27:36 by daquino-          #+#    #+#             */
/*   Updated: 2023/10/04 12:07:16 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	char	*str;

	l = (char)c;
	str = (char *)s;
	if (l == 0)
	{
		while (*str != '\0')
			str++;
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == l)
			return (str);
		str++;
	}
	return (NULL);
}
/* ,
int main()
{
	char *str = ft_strchr("teste", '\0');
	printf("%s", str - 2);
	printf("%p", str);
	return 0;
} */