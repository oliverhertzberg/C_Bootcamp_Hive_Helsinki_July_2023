/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:47:02 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 12:21:45 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int	main(void)
{
	char str1[] = "AAb";
	char str2[] = "AAB";
	printf("AAb vs AAB: %d\n", ft_strcmp(str1, str2));
	printf("AAB vs AAb: %d\n", ft_strcmp("AAB", "AAb"));
	printf("AAB vs AAB: %d\n", ft_strcmp("AAB", "AAB"));
	printf("empty vs empty: %d\n", ft_strcmp("", ""));
	printf("AAB vs empty: %d\n", ft_strcmp("AAB", ""));
	return (0);
}*/
