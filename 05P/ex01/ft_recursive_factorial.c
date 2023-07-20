/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:43 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/10 16:53:00 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{	
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 1)
		return (0);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*#include <stdio.h>
int	main()
{
	int nb;
	nb = 13;
	printf("%d\n", ft_recursive_factorial(nb));
	nb = -52;
	printf("%d\n", ft_recursive_factorial(nb));
	nb = 1;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}*/
