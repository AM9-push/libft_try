/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:06:18 by aachalla          #+#    #+#             */
/*   Updated: 2023/10/31 16:55:53 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t l;
    size_t d;
    size_t s;
    
    i = 0;
    l = 0;
    s = 0;
    while (dst[l]) l++;
    d = l;
    while (src[s]) s++;
    while (l < dstsize)
        dst[l++] = src[i++];
    dst[--l] = '\0';
    return (d + s);
}