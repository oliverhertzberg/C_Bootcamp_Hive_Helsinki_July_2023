/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 20:19:13 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 20:23:23 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	return ((ft_fibonacci(index - 1)) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int main()
{
	int n = 4;
	int i;
	
	printf("%d", ft_fibonacci(n));
	return (0);
}*/
