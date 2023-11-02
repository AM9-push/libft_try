/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachalla <aachalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:19:33 by aachalla          #+#    #+#             */
/*   Updated: 2023/10/31 14:20:01 by aachalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t size)
{
    size_t  i;
    char    tmp[size];

    i = 0;
    while (i < size)
    {
        tmp[i] = *((char*)src + i);
        i++;
    }
    
    i = 0;
    while (i < size)
    {
        *((char*)dest + i) = tmp[i];
        i++;
    }
    return (dest);
}