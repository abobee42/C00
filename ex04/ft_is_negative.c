/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobee <abobee@student.42.fr              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:04:24 by abobee            #+#    #+#             */
/*   Updated: 2023/09/07 23:32:51 by abobee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_is_negative(int n);

void	ft_putchar(char n);

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else
	{
		ft_putchar ('P');
	}
}
/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
