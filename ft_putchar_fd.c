/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:15:43 by sarperez          #+#    #+#             */
/*   Updated: 2023/12/02 16:30:07 by sarperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{
    char c = 'A';

    ft_putchar_fd(c, 1);
    ft_putchar_fd('\n', 1);

    ft_putchar_fd(c, 2);
    ft_putchar_fd('\n', 2);

    return 0;
}
*/