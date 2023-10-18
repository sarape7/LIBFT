/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:39:08 by sarperez          #+#    #+#             */
/*   Updated: 2023/10/13 13:22:09 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
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
