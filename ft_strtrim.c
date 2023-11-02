/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:43:10 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/02 22:08:32 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen (const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t  i;
    char    tmp[size];

    i = 0;
    while (i < size)
    {
        tmp[i] = *((char*)src + i);
        i++;
    }
    
    i = 0;
    while (i < size)
    {
        *((char*)dest + i) = tmp[i];
        i++;
    }
    return (dest);
}

char    *ft_strdup(const char *s1)
{
    char    *p;
    int   size;

    size = ft_strlen(s1);
    p = malloc(size + 1);
    if (!p)
        return (0);
    ft_memcpy(p, s1, size);
    p[size] = '\0';
    return (p);
}

int cmp(char c, char const *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *p;
    int      i;
    int      k;
    int      l;

    p = ft_strdup(s1);
    i = 0;
    k = ft_strlen(p);
    while (cmp(p[i], set) && p[i])
    {
        l = i;
        while (l < k)
        {
            p[l] = p[l + 1];
            l++; 
        }
        k--;
    }
    while (cmp(p[k - 1], set))
    {
        p[k - 1] = p[k];
        k--;
    }
    return (p);
}