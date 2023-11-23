/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:28:22 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/22 15:46:44 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return ((void *)src);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "ali";
	char str2[7];
	void *ptr;
	ptr = memcpy(str2, str, 6);
	printf("%s\n", (char *)ptr);
	printf("%c\n", str2[5]);
} */