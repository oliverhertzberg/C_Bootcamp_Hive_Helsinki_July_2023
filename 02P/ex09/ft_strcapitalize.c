/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:53:31 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/05 14:20:33 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_noletter(char *str, int i);

int	check_dig(char *str, int i);

char	*ft_strpcapitalize(char *str)
{
	int	i;
	int	space;

	space = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((space == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			space = 0;
		}
		else if (space == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (space == 0 && (check_noletter(str, i)) && !(check_dig(str, i)))
			space = 1;
		else if (check_dig(str, i))
			space = 0;
		i++;
	}
	return (str);
}

int	check_noletter(char *str, int i)
{
	return (((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')));
}

int	check_dig(char *str, int i)
{
	return ((str[i] >= '0') && (str[i] <= '9'));
}
/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s\n", str);
	ft_strpcapitalize(str);
	printf("After:  %s\n", str);

	return 0;
}
*/
