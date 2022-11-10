/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:44:49 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/10 12:36:37 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkset(char c, const char *set)
{
	while (set)
	{
		if (c == set++)
			return (1);
		return (0);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = ft_strlen(s1);
	while (checkset(s1[i]))
		i++;
	while (checkset(s1[j]))
		j--;
	return (ft_substr(*s1, i, (j - i)));
}
