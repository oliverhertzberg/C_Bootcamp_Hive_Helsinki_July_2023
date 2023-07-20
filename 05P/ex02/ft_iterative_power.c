/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:38:28 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 21:07:44 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{	
	int	result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int	main()
{
	int nb;
	int power;
	nb = 7;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 0;
	power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = -42;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	nb = 1;
	power = -1;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
