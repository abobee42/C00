/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobee <abobee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:03:15 by abobee            #+#    #+#             */
/*   Updated: 2023/09/07 23:52:17 by abobee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	ch;

	ch = '0';
	while (ch <= '9')
	{
		ft_putchar(ch);
		ch++;
	}
}
/*
int main(void){

	ft_print_numbers();

return(0);
}
*/
