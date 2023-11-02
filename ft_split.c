/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:56:11 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/02 13:12:15 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int countw(char const *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c && s[i + 1] && i && s[i - 1] != c)
            j++;
        i++;
    }
    if (s[i - 1] != c)
        j++;
    return (j);
}

void    copysplit(char *d, char const *s, int i, int j)
{
    int k;
    
    k = 0;
    while (i < j)
        d[k++] = s[i++];
    d[k] = '\0';
}

char    **ft_split(char const *s, char c)
{
    char    **p;
    char    *t;
    int       i;
    int       j;
    int       k;
    int       l;
    int       m;

    m = countw(s, c);
    p = (char**)malloc((m * sizeof(char**)) + 1);
    i = 0;
    j = 0;

    l = 0;
    while (i < m)
    {
        k = 0;
        while (s[j] == c)
            j++;
        l = j;
        while (s[j] && s[j++] != c)
          k++;
        if (!s[j])
          j++;
        t = malloc(k + 1);
        copysplit(t, s, l, j - 1);
        p[i++] = t;
    }
    p[i] = 0;
    return (p);
}

int main() {

  for (int i = 0; i < countw("werddd cfrdrgrddd", 'd'); i++)
    printf("%s\n", ft_split("werddd cfrdrgrddd", 'd')[i]);
}