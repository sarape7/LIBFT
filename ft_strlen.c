/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:31:37 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:19:30 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
int main()
{
	int i;
	char string[] = "holamundo";

	i = ft_strlen(string) + '0';
	write(1, &i, 1);
}
*/