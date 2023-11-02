/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:14:10 by aachalla          #+#    #+#             */
/*   Updated: 2023/10/31 22:22:32 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i++ < n)
    {
        if (*(char*)s1 != *(char*)s2)
            if (*(char*)s1 < *(char*)s2)
                return (-1);
            if (*(char*)s1 > *(char*)s2)
                return (1);
        s1++;
        s2++;
    }
    return (0);
}