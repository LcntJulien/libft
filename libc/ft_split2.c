/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:05:58 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/15 02:33:47 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	tabcounter(const char *s, char c)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s[i++])
	{
		if ((s[i + 1] == '\0' && s[i] != c) || (s[i] == c && s[i - 1] != c))
			r++;
	}
	return (r);
}

char	**freetab(char **p)
{
	int	i;

	i = 0;
	while (p[i++])
		free(p[i]);
	free(p);
	return (NULL);
}

char	*filltab(const char *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (s[i] && s[i] != c)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (tabcounter(s, c) + 1));
	if (!tab)
		freetab(tab);
	//printf("%i\n", tabcounter(s, c));
	while (*s)
	{
		if ((*s != c && (*s - 1) == c) || (*s != c && !(*s - 1)))
		{
			tab[j] = filltab(s, c);
			//printf("test\n");
			printf("%s\n", tab[j]);
			j++;
		}
		// printf("test\n");
		s++;
	}
	tab[j] = 0;
	return (tab);
}

int	main(void)
{
	int		i;
	char	*str;
	char	c;
	char	**tab;

	i = 0;
	str = "  split    this for me,       please !  ";
	c = ' ';
	tab = ft_split(str, c);
	while (tab[i])
	{
		// printf("test\n");
		printf("%s\n", tab[i]);
		i++;
	}
}
