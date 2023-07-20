/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:17:24 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/10 15:21:42 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	product;
	int	j;

	product = 1;
	j = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (j <= nb)
	{
		product *= j;
		j++;
	}
	return (product);
}
/*#include <stdio.h>
int	main()
{
	int nb;
	nb = 12;
	printf("%d\n",ft_iterative_factorial(nb));
	nb = 0;
	printf("%d\n",ft_iterative_factorial(nb));
	nb = -12;
	printf("%d\n",ft_iterative_factorial(nb));
	nb = 13;
	printf("%d\n",ft_iterative_factorial(nb));
	return (0);
}*/
