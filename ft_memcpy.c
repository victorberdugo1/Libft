/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:30:52 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/22 12:43:08 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest_ft[20];
    char dest_memcpy[20];

    ft_memcpy(dest_ft, src, strlen(src) + 1);
    memcpy(dest_memcpy, src, strlen(src) + 1);
    printf("Cadena copiada usando ft_memcpy: %s\n", dest_ft);
    printf("Cadena copiada usando memcpy    : %s\n", dest_memcpy);
    return 0;
}*/
