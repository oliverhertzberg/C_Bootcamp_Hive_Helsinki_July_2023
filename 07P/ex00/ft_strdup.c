/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:02:20 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/13 12:45:48 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*#include <stdio.h>
int	main()
{
	char src[] = "strdup example string";
	printf("dst = %s", ft_strdup(src));
	return (0);
}*/
