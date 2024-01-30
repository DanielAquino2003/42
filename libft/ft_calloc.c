/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:32:42 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:11 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*elem;

	elem = malloc(nmemb * size);
	if (!elem)
		return (NULL);
	ft_bzero(elem, nmemb * size);
	return (elem);
}
