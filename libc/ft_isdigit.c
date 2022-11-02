/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlecorne <jlecorne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:37:00 by jlecorne          #+#    #+#             */
/*   Updated: 2022/11/02 09:47:18 by jlecorne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
    if ((c >= 0 && c <= 9))
    {
        return(1);
    }
    return(0);    
}

int main(int argc, char const *argv[])
{
    if  (ft_isdigit('A') == 0)
        printf("isnotdigit");
    if  (ft_isdigit('A') != 0)
        printf("isdigit");
    return 0;
}
