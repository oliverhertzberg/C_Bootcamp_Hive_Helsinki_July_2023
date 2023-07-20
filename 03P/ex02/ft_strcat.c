/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:42:40 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 14:19:33 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len_count(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len_d;

	i = 0;
	len_d = len_count(dest);
	while (src[i] != '\0')
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (dest);
}

int	len_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	int i;

	char dest[10] = "sn";
	char src[] = "ke";
	i = 0;
	ft_strcat(dest, src);
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
