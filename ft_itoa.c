/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:49:38 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/23 14:33:10 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
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

static void	ft_fill(char *str, int count, long num)
{
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
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	num;

	num = (long)n;
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
	ft_fill(str, count, num);
	return (str);
}
/* #include <stdio.h>
#include <limits.h>
int main()
{
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(858947));
} */