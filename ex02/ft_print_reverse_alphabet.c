/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobee <abobee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:59:06 by abobee            #+#    #+#             */
/*   Updated: 2023/09/08 00:05:20 by abobee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		ft_putchar(ch);
		ch--;
	}
}
/*
int main(void){

	ft_print_reverse_alphabet();

return(0);
}
*/
