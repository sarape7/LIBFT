/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:00:06 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/03 18:06:48 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (*s1 != *s2 || (*s1 == '\0' || *s2 == '\0'))
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/* 
int main()
{
    char *s1 = "testeadorr";
     char *s2 = "testeng";
     size_t n = 6;

    printf("ft_%i\n", ft_strncmp(s1, s2, n));
    return (0);
} */