/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:23:16 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 20:28:35 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *p;
    int   size;

    size = ft_strlen(s1);
    p = malloc(size);
    if (!p)
        return (0);
    ft_memcpy(p, s1, size);
    return (p);
}