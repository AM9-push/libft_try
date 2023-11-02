/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:43:10 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 18:09:25 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int k;
    int l;
    char    *p;
    char    s[ft_strlen(s1)];
    
    i = 0;
    k = ft_strlen(s1);
    ft_memcpy(s, s1, k);
    while (s[i])
    {
        j = 0;
        while (set[j])
        {
            if (s[i] == set[j])
            {
            l = i;
                while (l < k)
                {
                    s[l] = s[l + 1];
                    l++;
                }
            }
            j++;
        }
        i++;
    }
    p = malloc(ft_strlen(s));
    ft_memcpy(p, s, ft_strlen(s));
    return (p);
}