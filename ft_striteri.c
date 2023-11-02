/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:40:41 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/02 11:54:56 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ll(unsigned int i, char *s)
{
    *s += i;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (*(s + i))
    {
        f(i, s + i);
        i++;
    }
}