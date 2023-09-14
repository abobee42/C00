/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobee <abobee@student.42.fr>              +#+  +:+       +#+*       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:57:18 by abobee            #+#    #+#             */
/*   Updated: 2023/09/08 00:12:54 by abobee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_alphabet(void);

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		ft_putchar(ch);
		ch++;
	}
}

/*
int main(void){

	ft_print_alphabet();

return(0);

}
*/
