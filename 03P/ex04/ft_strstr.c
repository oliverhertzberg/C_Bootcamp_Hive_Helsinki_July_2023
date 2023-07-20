/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:41:35 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/09 15:05:28 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	len_count(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_f;
	int	len_s;

	j = 0;
	i = 0;
	len_f = len_count(to_find);
	len_s = len_count(str);
	while (i <= len_s - len_f)
	{
		j = 0;
		while (str[j + i] == to_find[j])
		{
			j++;
			if (j == len_f)
				return (&str[i]);
		}
		i++;
	}
	return (0);
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
int main() {
    char str[] = "Hello, world!";
    char to_find[] = "world";

    if (ft_strstr(str, to_find) == NULL) {
        printf("Substring not found.\n");
    } else {
        printf("Substring found at index: %s\n", ft_strstr(str, to_find));
    }

    return 0;
}*/
