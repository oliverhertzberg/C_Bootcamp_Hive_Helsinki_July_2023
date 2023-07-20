/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:57:12 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 14:38:09 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len_count(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len_d;

	i = 0;
	len_d = len_count(dest);
	while (src[i] != '\0' && i < nb)
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
	unsigned int nb;
	int i;

	char dest[20] = "is that";
	char src[] = " a snake?";
	nb = 5;
	i = 0;
	ft_strncat(dest, src, nb);
	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
