/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:40:56 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/12 12:32:25 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 1;
	if (nb == 0 || nb == 1)
		flag = 0;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			flag = 0;
			break ;
		}
		i++;
	}
	if (flag == 1)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int main()
{
	printf("Prime Check: \n");
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(29));
	printf("Composite check: \n");
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(28));
	return (0);
}*/
