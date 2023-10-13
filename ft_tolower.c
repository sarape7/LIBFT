/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:56:14 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 10:20:34 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
int main(void)
{
	char	lowercase = 'a';
	char	uppercase = 'Z';
	char	non_alpha = '7';
	printf("Original lowercase: %c\n", lowercase);
	printf("ft_toupper lowercase: %c\n", ft_toupper(lowercase));
	printf("Original uppercase: %c\n", uppercase);
	printf("ft_toupper uppercase: %c\n", ft_toupper(uppercase));
	printf("Original non-alpha: %c\n", non_alpha);
	printf("ft_toupper non-alpha: %c\n", ft_toupper(non_alpha));
	return (0);
}*/
