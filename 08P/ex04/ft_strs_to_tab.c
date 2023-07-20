/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:24:16 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/17 14:08:56 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

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

char	*ft_strdup(char *src)
{
	char	*arr;
	int		i;

	i = 0;
	arr = (char *)malloc(ft_strlen(src));
	if (!arr)
		return (0);
	ft_strcpy(arr, src);
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	str = malloc((ac + 1) * sizeof(t_stock_str));
	if (!str)
		return (0);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = NULL;
	str[i].copy = NULL;
	return (str);
}
/*#include <stdio.h>
#include <unistd.h>
char	newline()
{
	return (write(1, "\n", 1));
}

int main(int argc, char **argv)
{
	int	i;
	int	j;
	char c;
    struct s_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);

    if (result)
    {
        i = 0;
		j = 0;
        while (result[i].str)
        {
        	while(result[i].str[j])
			{
				write(1, &result[i].str[j], 1);
				j++;
			}
			newline();
			j = 0;
			while(result[i].size)
			{
    		    c = result[i].size + '0';
    		    write(1, &c, 1);
    		    break;
			}
			newline();
			j = 0;
			while (result[i].copy[j])
			{
			    write(1, &result[i].copy[j], 1);
				j++;
			}
			newline();
			j = 0;
			i++;
        }
    }
	free(result);
    return 0;
}*/
