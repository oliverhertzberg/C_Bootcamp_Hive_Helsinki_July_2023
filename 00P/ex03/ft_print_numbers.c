/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:46:19 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/06/30 18:24:45 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digit;
	char	ch;

	digit = 0;
	while (digit <= 9)
	{
		ch = digit + '0';
		write(1, &ch, 1);
		digit++;
	}
}		
