/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:31:54 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 13:01:44 by aachalla         ###   ########.fr       */
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

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (i < dstsize)
    {
        dst[i] = src[i];
        i++;
    }
    dst[--i] = '\0';
    return (ft_strlen(src));
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *p;
    int      i;

    p = malloc(len);
    if (!p)
        return (0);

    i = ft_strlcpy(p, s + start, len);
    return (p);
}

int main()
{
    char    *p;
    p = ft_substr("abcdef", 2, 3);
    printf("%s\n", p);
    free(p);
}










