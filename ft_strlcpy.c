/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:21:41 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 12:21:31 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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