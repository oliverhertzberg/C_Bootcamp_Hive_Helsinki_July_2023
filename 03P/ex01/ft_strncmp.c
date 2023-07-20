/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:15:02 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 14:00:21 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && ((s1[i] != '\0') || (s2[i]) != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char str1[] = "sNAKE";
	char str2[] = "SNAKE";
	unsigned int n = 3;
	printf("n = 7, s1 = sNAKE, s2 = SNAKE:%d\n",ft_strncmp(str1, str2, 7));
	printf("n = 2, s1 = SN, s2 = SNa:%d\n",ft_strncmp("SN", "SNa", 4));
	printf("n = 0, s1 = SNAKE, s2 = SNAke:%d\n",ft_strncmp("SNAKE","SNAke", 0));
	return (0);
}*/
