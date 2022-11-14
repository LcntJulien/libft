/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:38:45 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/14 16:56:55 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	counter(const char *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	if (s[0] != '\0' && s)
		r++;
	while (s[i++])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			r++;
	}
	return (r);
}

char	*bring(const char *s, char c)
{
	int		i;
	char	*p;

	i = 0;
	p = "";
	while (s[i] && s[i] != c)
		i++;
	p = malloc(sizeof(char) * (i + 1));
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
	free(p);
	return (NULL);
}

char	**whileloop(const char *s, char c, int cnt)
{
	int		i;
	int		j;
	char	**r;

	i = 0;
	j = 0;
	r = malloc(sizeof(char *) * (cnt + 1));
	if (!r)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			r[j] = bring(s, c);
			if (!(r[j]))
				return (squarrefree(r));
			j++;
		}
		while (*s && *s != c)
			s++;
		s++;
	}
	r[j] = 0;
	return (r);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		cnt;

	i = 0;
	j = 0;
	cnt = counter(s, c);
	return (whileloop(s, c, cnt));
}

int	main(void)
{
	char str[] = " ol ol";
	char **tab;
	int i;
	char c = ' ';

	tab = ft_split(str, c);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
