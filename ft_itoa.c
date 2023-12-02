/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:39:53 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/02 13:55:42 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	if (n == -2147483648)
		return (11);
	if (n < 0)
		return (1 + ft_numlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_numlen(n / 10));
}

static void	ft_fillstr(char *str, int n, int len)
{
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		ft_fillstr(str + 2, 147483648, len - 2);
	}
	else if (n < 0)
	{
		str[0] = '-';
		ft_fillstr(str + 1, -n, len - 1);
	}
	else if (n < 10)
		str[len - 1] = '0' + n;
	else
	{
		ft_fillstr(str, n / 10, len - 1);
		str[len - 1] = '0' + n % 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fillstr(str, n, len);
	str[len] = '\0';
	return (str);
}

/*
int main()
{
	int		number;
	char	*str;

	number = -12345;
	str = ft_itoa(number);
	if (str)
	{
		printf("Converted string: '%s'\n", str);
		free(str);
	}
	else
	{
		printf("Failed to allocate memory for converted string.\n");
	}

	return (0);
}*/