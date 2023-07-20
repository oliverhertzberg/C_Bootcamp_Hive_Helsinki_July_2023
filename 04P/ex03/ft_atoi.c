/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:51:01 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/19 20:11:07 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_other(char c);
int	white_space(char c);

int	ft_atoi(char *str)
{
	int	sum;
	int	sign;
	int	i;

	i = 0;
	sum = 0;
	sign = 1;
	while (white_space(str[i]))
	{
		i++;
	}
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		sum = (sum * 10) + ((str[i]) - '0');
		i++;
	}
	return (sum * sign);
}

int	check_other(char c)
{
	return (c != '+' && c != '-'
		&& (c < '0' || c > '9'));
}

int	white_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}
#include <stdio.h>
int	main()
{
	char	str[] = " ,---+-+21474836473,34ab567";

	printf("%d",ft_atoi(str));
	return (0);
}
