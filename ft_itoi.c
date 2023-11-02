/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:21:47 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/01 21:49:02 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int lenn(int n)
{
    int i;

    i = 0;
    if (n <= 0)
        i++;
    while (n)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char    *ft_itoa(int n)
{
    char    *p;
    int      i;
    int      k;

    i = lenn(n) + 1;
    p = malloc(i--);
    k = 0;
    p[i--] = '\0';
    if (n < 0)
    {
      n = -n;
      p[0] = '-';
      k = 1;
    }
    while (i >= k)
    {
        p[i--] = (n % 10) + 48;
        n /= 10;
    }
    return (p);
}