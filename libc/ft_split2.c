/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:05:58 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/14 21:43:42 by jlecorne         ###   ########.fr       */
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
	while (s[i++])
	{
		if ((s[i + 1] == '\0' && s[i] != c) || (s[i] == c && s[i - 1] != c))
			r++;
	}
	return (r);
}

void    squarrefree(char **p)
{
	int	i;

	i = 0;
	while (p[i++])
		free(p[i]);
	free(p);
	return (NULL);
}

char    **ft_split(const char *s, char c)
{
    int i;
    int j;
    int ctn;
}

int main()
{
    char    *str = "test split ";
    // "test split";
    // " test split ";
    // " test split"; 
    char    c = ' ';
    printf("%i\n", counter(str, c));
}
