/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:47:21 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/10 12:01:28 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (s && i < len)
	{
		*(char *)(p + i) = *(char *)(s + start);
		start++;
		i++;
	}
	return (p);
}
