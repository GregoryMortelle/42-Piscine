/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:08:00 by grmortel          #+#    #+#             */
/*   Updated: 2023/03/02 11:13:30 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	words;

	if (!str || !charset)
	{
		return (0);
	}
	i = 0;
	words = 0;
	while (str[i])
	{
		if (ft_sep(str[i + 1], charset) == 1 && ft_sep(str[i], charset) == 0)
			words++;
		else if (ft_sep(str[i], charset) == 0 && str[i + 1] == '\0')
			words++;
		i++;
	}
	return (words);
}

int	put_word(char **tab, char *str, int *increment, int word_pos)
{	
	int	i;
	int	j;
	int	k;
	int	word_size;

	i = increment[0];
	j = increment[1];
	word_size = 0;
	word_size = j - i + 1;
	tab[word_pos] = malloc(sizeof(char) * (word_size + 1));
	if (!tab[word_pos])
		return (-1);
	k = 0;
	while (i <= j)
	{
		tab[word_pos][k] = str[i];
		i++;
		k++;
	}
	tab[word_pos][k] = '\0';
	i++;
	word_pos++;
	return (i);
}

void	ft_write_str(char **tab, char *str, char *charset)
{	
	int	increment[2];
	int	i;
	int	j;
	int	word_pos;

	i = 0;
	j = 0;
	word_pos = 0;
	while (str[j])
	{
		if ((ft_sep(str[j + 1], charset) == 1
				|| !str[j + 1]) && ft_sep(str[j], charset) == 0)
		{
			increment[0] = i;
			increment[1] = j;
			i = put_word(tab, str, increment, word_pos);
			word_pos++;
			j++;
		}
		if (ft_sep(str[j], charset) == 1)
			i = j + 1;
		j++;
	}
}

#include <stdio.h>

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**tab;

	if (str == NULL || charset == NULL)
	{
		return (NULL);
	}
	word_count = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (!tab)
		return (0);
	tab[word_count] = 0;
	ft_write_str(tab, str, charset);
	return (tab);
}

#include <stdio.h>

int main()
{
	char *str;
	char c;
	char *split;

	str = NULL;
	c = 'o';
	split = *ft_split(str, &c);
	//printf("%s", split);
}
