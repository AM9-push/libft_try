/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:02:59 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 17:42:36 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    int      j1;
    int      j2;
    
    j1 = ft_strlen(s1);
    j2 = ft_strlen(s2);
    p = malloc(j1 + j2 + 1);
    if (!p)
        return (0);
    ft_memcpy(p, s1, j1);
    ft_memcpy(p + j1, s2, j2);
    p[j1 + j2] = '\0';
    return (p);
}