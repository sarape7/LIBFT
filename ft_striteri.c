/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:47:54 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/02 16:13:37 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_iterstr(char *s, void (*f)(unsigned int, char*), unsigned int i)
{
	if (s[i])
	{
		f(i, &s[i]);
		ft_iterstr(s, f, i + 1);
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (s && f)
		ft_iterstr(s, f, 0);
}
/*
#include <stdio.h>

void my_func(unsigned int i, char *c)
{
	if (i % 2)
		*c = *c - 32; // Convert every second character to uppercase
}

int main()
{
	char s[] = "hello world";

	printf("Original string: '%s'\n", s);
    ft_striteri(s, my_func);
    printf("Transformed string: '%s'\n", s);

    return 0;
}*/