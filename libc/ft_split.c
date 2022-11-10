/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:38:45 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/10 16:41:38 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(const char *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (s[0] != '\0' && s)
		r++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			r++;
		i++;
	}
	return (r);
}

char	*bring(char *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	p = malloc(sizeof(char *) * (i + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	**squarrefree(char **p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	squarrefree(p);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		cnt;
	char	**r;

	i = 0;
	j = 0;
	cnt = counter(s, c);
	r = malloc(sizeof(char *) * (cnt + 1));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			r[j] = bring((s + i), c);
			if (!(r[j]))
				return (squarrefree(r));
			j++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	r[j] = '\0';
	return (r);
}
