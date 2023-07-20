/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:59:03 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/02 17:52:17 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_a;
	int	num_b;

	num_a = *a;
	num_b = *b;
	if (num_b != 0)
	{
		*a = num_a / num_b;
		*b = num_a % num_b;
	}
}
