/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:25:39 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/10 18:27:11 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(int num, char **s);
int		ft_strcmp(const char *s1, const char *s2);

void	ft_sort_params(int num, char **s)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 0;
	while (i < num)
	{	
		j = i;
		while (j > 0 && ft_strcmp(s[j - 1], s[j]) > 0)
		{
			temp = s[j - 1];
			s[j - 1] = s[j];
			s[j] = temp;
			j--;
		}
		i++;
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	ft_sort_params(argc - 1, argv + 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
