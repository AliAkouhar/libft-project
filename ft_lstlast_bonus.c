/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:50:59 by aakouhar          #+#    #+#             */
/*   Updated: 2023/11/21 16:53:31 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*one;
	t_list	*two;
	t_list	*three;
	t_list	*ptr;

	one = malloc(sizeof(t_list));
	two = malloc(sizeof(t_list));
	three = malloc(sizeof(t_list));
	head = one;
	one->content = "hello";
	two->content = "hola";
	three->content = "salam";
	one->next = two;
	two->next = three;
	three->next = NULL;
	ptr = ft_lstlast(head);
	printf("%s\n", ptr->content);
}
*/
