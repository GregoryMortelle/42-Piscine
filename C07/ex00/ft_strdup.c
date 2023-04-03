/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:39:35 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/27 15:42:10 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		i;

	len = ft_strlen(src);
	i = 0;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*copy;

	str = "Bonjour";
	copy = ft_strdup(str);
	printf("Str : %s\n", str);
	printf("Copy : %s\n", copy);
	return (0);
}
*/
