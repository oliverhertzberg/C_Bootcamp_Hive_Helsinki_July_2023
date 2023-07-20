/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:06:03 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/19 13:52:30 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdlib.h>
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

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

void	*ft_strcat(char *dst, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
	}
	while (src[j])
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (dst);
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
	str[i].size = 0;
	str[i].str = NULL;
	str[i].copy = NULL;
	return (str);
}*/
char	newline(void)
{
	return (write(1, "\n", 1));
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	newline();
}

void	ft_putnbr(int nbr)
{
	char	ch;

	ch = nbr + '0';
	write(1, &ch, 1);
	newline();
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		j;
	char	c;

	if (par)
	{
		i = 0;
		j = 0;
		while (par[i].str)
		{
			ft_putstr(par[i].str);
			ft_putnbr(par[i].size);
			ft_putstr(par[i].copy);
			i++;
		}
	}
}
/*int main(int argc, char **argv)
{
    struct s_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);
	
	ft_show_tab(result);
	free(result);
    return 0;
}*/
