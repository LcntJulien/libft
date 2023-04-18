/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:11:46 by jlecorne          #+#    #+#             */
/*   Updated: 2023/04/18 14:10:39 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lstfirst, t_list *new)
{
	t_list	*t;

	if (*lstfirst)
	{
		t = ft_lstlast(*lstfirst);
		t->next = &*new;
	}
	else
		*lstfirst = new;
}
