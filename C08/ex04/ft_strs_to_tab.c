/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <grmortel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:42:06 by grmortel          #+#    #+#             */
/*   Updated: 2023/03/01 18:30:43 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	dest = d;
	if (!d)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*sss;
	int			i;

	if (!av)
		return (NULL);
	sss = malloc((ac + 1) * sizeof(t_stock_str));
	if (!sss)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		sss[i].size = ft_str_length(av[i]);
		sss[i].str = av[i];
		sss[i].copy = ft_strdup(av[i]);
		i++;
	}
	sss[i].str = NULL;
	sss[i].size = 0;
	return (sss);
}
