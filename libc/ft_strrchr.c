/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:02:48 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/09 14:01:02 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);

	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}