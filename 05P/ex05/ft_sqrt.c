/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:37:32 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/12 22:25:40 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	unsigned int	num;

	num = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((num * num) < (unsigned int)nb && (unsigned int)nb > 0)
	{
		num++;
	}
	if ((num * num) == (unsigned int)nb)
		return (num);
	else
		return (0);
}
#include <stdio.h>
int	main()
{
	int nb;
	nb = 36;
	printf("%d\n", ft_sqrt(nb));
	nb = -52;
	printf("%d\n", ft_sqrt(nb));
	nb = 0;
	printf("%d\n", ft_sqrt(nb));
	nb = 8;
	printf("%d\n", ft_sqrt(nb));
	nb = 2147395600;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
