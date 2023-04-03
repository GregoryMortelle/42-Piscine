/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:59:39 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/27 17:30:25 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	i = -1;
	while (++i < max)
		(*range)[i] = min + i;
	return (max);
}

/*
#include <stdio.h>
int main(void)
{
  int min;
  int max;
  int *tab;
  int size;
  int i = 0;
  min = -2000000;
  max = 2000000;
  size = ft_ultimate_range(&tab, min, max);
  while(i < size)
  {
    printf("%d\n", tab[i]);
    i++;
  }
} */
