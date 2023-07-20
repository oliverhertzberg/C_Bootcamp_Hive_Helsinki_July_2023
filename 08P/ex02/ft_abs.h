/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:50:51 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/19 18:25:18 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) (((Value) < 0) * -(Value) + ((Value) >= 0) * (Value)) 
#endif
/*
 #include "ft_abs.h"
#include <stdio.h>
int	main()
{
	int i;

	i = -5;
	printf("%d", ABS(i));
	return (0);
}*/
