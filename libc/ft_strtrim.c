/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:44:49 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/12 13:02:03 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, const char *set)
{
	while (set)
	{
		if (c == (char)set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while (checkset(s1[i], set))
		i++;
	while (checkset(s1[j], set))
		j--;
	return (ft_substr(s1, i, (j - i)));
}
