/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:58:45 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/10 10:11:51 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    char    *p;

    i = 0;
    j = 0;
    len = (ft_strlen(s1) + ft_strlen(s2) + 1);
    p = malloc(sizeof(char) * len);
    if (!p)
        return (0);
    
}