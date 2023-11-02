/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:47:31 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 11:24:22 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen (const char *s)
{
    int i;

    i = 0;
    while (s[i++]);
    return (i - 1);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    char    *p;
    int j;
    size_t k;

    i = 0;
    p = (char*)haystack;
    while (i < len)
    {
        j = 0;
        k = i;
        if (*(haystack + i) == needle[0])
        {
            p = ((char*)haystack + i);
            while ((k < len) && (haystack[k++] == needle[j]))
                j++;
        }
        if (ft_strlen(needle) == j)
            return (p);
        i++;
    }
    return (0);
}