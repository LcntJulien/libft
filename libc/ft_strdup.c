/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:27:38 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/10 11:56:40 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strdup(const char *s1)
{
	char	*p;

	if (!s1)
		return (NULL);
	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, (ft_strlen(s1) + 1));
	return (p);
}
