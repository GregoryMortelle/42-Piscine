/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:42:39 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/28 10:05:21 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	j = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * j);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < j)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*

#include <stdio.h>

int main()
{
	int	a;
	int	*taba;
	taba = ft_range(-2000000, 2000000);
	a = 0;
	while (a < 4000000)
	{
		printf("%d\n", taba[a]);
		a++;
	}
	return (0);
} */
