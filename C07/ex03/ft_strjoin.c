/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:08:21 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/28 16:08:12 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;
	int		count;

	j = 0;
	k = 0;
	i = 0;
	count = 1;
	while (i < size)
		count += ft_strlen(strs[i++]) + ft_strlen(sep);
	tab = malloc(sizeof(tab) * count);
	i = -1;
	while (++i < size)
	{
		while (strs[i][j] != '\0')
			tab[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			tab[k++] = sep[j++];
		j = 0;
	}
	tab[k] = '\0';
	return (tab);
}


#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int	size;
	size = 3;
	strs = malloc(3 * sizeof(result));
	strs[0] = malloc(sizeof(sep) * 5 + 1);
	strs[1] = malloc(sizeof(sep) * 7 + 1);
	strs[2] = malloc(sizeof(sep) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	sep = "1";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
} 
