/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:01:29 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/22 17:21:51 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	// char    *str;
	// str = ft_strrchr(NULL, 'i');
	// printf("%s", str);
	printf("%s", strrchr(NULL, 'i'));
} */