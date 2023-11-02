/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:53:27 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 22:04:38 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    j(unsigned int i, char c)
{
    return (c + i);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *p;
    int      i;

    p = malloc(strlen(s) + 1);
    i = 0;
    while (s[i])
    {
        p[i] = f(i, s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}