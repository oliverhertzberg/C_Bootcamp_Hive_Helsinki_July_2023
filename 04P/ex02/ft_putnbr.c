/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:43:28 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 16:44:28 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*int main()
{
	int nb = 2000;
	ft_putnbr(nb);
	write (1, "\n", 1);
	nb = -42;
	ft_putnbr(nb);
	write (1, "\n", 1);
	nb = 0;
	ft_putnbr(nb);
	write (1, "\n", 1);
	nb = -2147483648;
	ft_putnbr(nb);
	write (1, "\n", 1);
	return (0);
}*/
