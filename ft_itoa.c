/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:49:38 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/19 11:58:37 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count = 1;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(long num)
{
	char	*str;
	int		count;

	count = ft_count(num);
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		str[0] = '-';
	}
	str[count] = '\0';
	count--;
	while (count >= 0)
	{
		if (str[count] == '-')
			break ;
		str[count] = (num % 10) + '0';
		num = num / 10;
		if (count == 0)
			break ;
		count--;
	}
	return (str);
}
