/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:25:07 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/17 19:15:53 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dst, char *src);

int		ft_strlen(char *str);

char	*ft_strjoin(char **sstr, char *sep, int size)
{
	char	*arr;
	int		total_len;
	int		i;

	i = 0;
	total_len = 0;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		total_len += ft_strlen(sstr[i]);
		i++;
	}
	total_len += ((ft_strlen(sep) * (size - 1)) + 1);
	arr = (char *)malloc(total_len);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, sstr[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

char	*ft_strcat(char *dst, char *src)
{

	while (*dst)
	{
		dst++;
	}
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
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
#include <stdio.h>
int main(void)
{
    char    *sstr[] = {"Snake", "in", "the", "grass!"};
	char	*sep = " ";
	char 	*result = ft_strjoin(sstr, sep, 4);

	printf("%s", result);
	free(result);
    return (0);
}
