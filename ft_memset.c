/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:09:32 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 22:38:57 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        *((char*)b + i) = c;
        i++;
    }
    return (b);
}

int main()
{   
    int t[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
        printf("%d  ", ((int*)ft_memset(t, 9, 2))[i]);
}