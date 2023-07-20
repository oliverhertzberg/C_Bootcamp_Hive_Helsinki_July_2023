/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:25:31 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/12 21:52:37 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc ((max - min) * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*#include <stdio.h>
int	main()
{
	int i;

	i = 0;
	while (i < 9)
	{
		printf("%d, ",(ft_range(1, 10)[i]));
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 15)
	{
		printf("%d, ",(ft_range(-5, 10)[i]));
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 17)
	{
		printf("%d, ",(ft_range(-22, -5)[i]));
		i++;
	}
	printf("\n");
	printf("%d", *(ft_range(8, 4)));
}*/
