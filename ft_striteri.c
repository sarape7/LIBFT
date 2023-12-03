/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:47:54 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 17:45:37 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* 
void	funcion(unsigned int a, char *c)
{
	*c = a + *c;
}

int	main(void)
{
	char	s[] = "AAAA";

	printf("Original String: %s\n", s);
	ft_striteri(s, &funcion);

	printf("Mapped String: %s\n", s);
	return (0);
} */