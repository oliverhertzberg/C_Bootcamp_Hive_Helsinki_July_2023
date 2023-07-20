/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:41:02 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/02 18:01:59 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{	
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
		j++;
		}
	i++;
	}
}	
