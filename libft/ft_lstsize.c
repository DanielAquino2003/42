/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:51:55 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:05:58 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		num;
	t_list	*aux;

	aux = lst;
	num = 1;
	if (!lst)
		return (0);
	while (aux->next != NULL)
	{
		num ++;
		aux = aux->next;
	}
	return (num);
}
