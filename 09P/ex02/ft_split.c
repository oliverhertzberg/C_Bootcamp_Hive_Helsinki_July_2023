/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohertzbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:02:23 by ohertzbe          #+#    #+#             */
/*   Updated: 2023/07/19 12:03:33 by ohertzbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep);

int	word_count(char *s, char *c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (!(is_sep(s[i], c)) && ((is_sep(s[i - 1], c)
					|| i == 0) && flag == 0))
		{
			count++;
			flag = 1;
		}
		else
			flag = 0;
		i++;
	}
	return (count);
}

char	*getword(char *s, int start, int end, char *c)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
	{
		word[i++] = s[start++];
	}
	if (start == end && !(is_sep(s[start], c)))
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	**split_func(char *str, char *charset, char **split)
{
	int	i;
	int	j;
	int	index;
	int	len;

	i = 0;
	j = 0;
	index = -1;
	len = 0;
	while (str[len])
		len++;
	while (str[i])
	{
		if (!(is_sep(str[i], charset)) && (i == 0
				|| is_sep(str[i - 1], charset)))
			index = i;
		else if ((is_sep(str[i], charset) || i == (len - 1)) && index >= 0)
		{
			split[j++] = getword(str, index, i, charset);
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		index;
	int		j;
	char	**split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc((word_count(str, charset) + 1) * sizeof(char *));
	if (!split || !str)
		return (0);
	return (split_func(str, charset, split));
}
#include <stdio.h>
int	main()
{
	int	i;

    char    **result;
	char	*str = "ABC, DEF GHI JKL!";
	char	*charset = " A,";
	
	i = 0;
	result = ft_split(str, charset);
	while (result[i])
	{
    	printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
