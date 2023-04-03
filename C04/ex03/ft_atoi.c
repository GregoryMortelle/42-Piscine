/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:33:22 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/26 10:02:43 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	negative = 0;
	while (*str == 43 || *str == 45)
		if (*str++ == 45)
			negative = 1 - negative;
	i = 0;
	while (*str >= 48 && *str <= 57)
		i = i * 10 + *str++ - 48;
	if (negative)
		i *= -1;
	return (i);
}
