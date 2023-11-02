/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:29:16 by aachalla          #+#    #+#             */
/*   Updated: 2023/11/02 15:24:09 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_calloc(size_t count, size_t size)
{
    void    *p;
    size_t   i;

    p = malloc(count * size);
    i = 0;
    while (i < count * size)
        ((char*)p)[i++] = 0;
    return (p);
}