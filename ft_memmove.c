/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:10 by aachalla          #+#    #+#             */
/*   Updated: 2023/10/31 14:19:55 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size)
    {
        *((char*)dest + i) = *((char*)src + i);
        i++;
    }
    return (dest);
}