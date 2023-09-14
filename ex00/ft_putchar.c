/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abobee <abobee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:53:00 by abobee            #+#    #+#             */
/*   Updated: 2023/09/08 00:15:35 by abobee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar ('c');
	return (0);
}

/*
int main(void){

	ft_putchar();

return(0);
}
*/
