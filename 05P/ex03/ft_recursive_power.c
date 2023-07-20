/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:55:17 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/12 18:24:18 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*#include <stdio.h>
int	main()
{
	int nb;
	int power;
	nb = 7;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 0;
	power = 0;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -42;
	power = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = -42;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	nb = 1;
	power = -1;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}*/
