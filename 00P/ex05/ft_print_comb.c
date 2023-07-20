/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:47:54 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/06/30 19:00:22 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				convert_to_strings(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	convert_to_strings(int i, int j, int k)
{
	char	ic;
	char	jc;
	char	kc;

	ic = i + '0';
	jc = j + '0';
	kc = k + '0';
	write(1, &ic, 1);
	write(1, &jc, 1);
	write(1, &kc, 1);
	if (i != 7 || j != 8 || k != 9)
	{
		write(1, ", ", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
