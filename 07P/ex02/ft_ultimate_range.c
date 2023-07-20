/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:40:07 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/18 20:27:47 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = malloc ((max - min) * sizeof(int));
	if (!arr)
		return (-1);
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}
#include <stdio.h>
int	main()
{
	int *arr;
	int	i;
	int	size;
	
	i = 0;
	size = ft_ultimate_range(&arr, 1, 10);
	printf("%d\n", size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
