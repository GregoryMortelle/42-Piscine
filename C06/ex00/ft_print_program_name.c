/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmortel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:27:08 by grmortel          #+#    #+#             */
/*   Updated: 2023/02/21 20:42:29 by grmortel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*str;
	int		i;

	(void) ac;
	i = 0;
	str = av[0];
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
	return (0);
}
