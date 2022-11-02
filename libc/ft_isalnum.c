/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:56:43 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/02 11:13:37 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int  c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return(1);
    else if (c >= 0 && c <= 9)
        return(1);
    return(0);
}

int main()
{
    if (ft_isalnum(' ') == 0)
        printf("Tout va bene ma bella");
    if (ft_isalnum(' ') == 1)
        printf("Pas bien !!!");
    return(0);
}
